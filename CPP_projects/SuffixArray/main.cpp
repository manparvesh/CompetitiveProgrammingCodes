#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;

#define debug

map<string, int> mp;

// O ( N^2 Log(N) )
vector<string> suffix_array_simple(string s) {
    vector<string> v;
    mp.clear();
    for (int i = 0; i < s.size(); i++) {
        mp[s.substr(i, s.size() - 1)] = i;
        v.push_back(s.substr(i, s.size() - 1));
    }
    sort(v.begin(), v.end());
#ifdef debug
    cout << "input string: " << s << endl;
    // cout << "substring" << string(s.length() * 2 - string("substring").length(), ' ') << "location at which it is found" << endl;
    // for (int i = 0; i < v.size(); i++) {
    // 	cout << v[i] << string(s.length() * 2 - v[i].length(), ' ') << mp[v[i]] << endl;
    // }
#endif
    return v;
}

int compare_str(string pattern, string text, int m) {
    for (int i = 0; i < m; i++) {
        if (pattern[i] < text[i]) { return -1; }
        if (pattern[i] > text[i]) { return 1; }
    }
    return 0;
}

// the search function for simple - O(nlogn)
void search(string pattern, string text, vector<string> suffix_array) {
    int n = text.size();
    int m = pattern.size();
    int l = 0, r = n - 1, mid;
    string str_to_compare;
    while (l <= r) {
        // check if pattern is prefix of middle suffix in suffix array
        mid = l + (r - l) / 2;
        str_to_compare = suffix_array[mid];
#ifdef debug
        cout << "comparing pattern: " << pattern << " and str_to_compare: " << str_to_compare << endl;
#endif
        int res = compare_str(pattern, str_to_compare, m);
        if (res == 0) {
            cout << "pattern found at " << mp[suffix_array[mid]] << endl;
            return;
        }
        if (res < 0) { r = mid - 1; }
        else { l = mid + 1; }
    }
    cout << "Not found" << endl;
}


// O ( N Log(n)^2 ) building
struct suffix {
    int index; // original index
    int rank[2]; // ranks and next pair
};

// to compare suffixes
// compares 2 pairs
int cmp_suffix(struct suffix a, struct suffix b) {
    return (a.rank[0] == b.rank[0]) ?
           (a.rank[1] < b.rank[1] ? 1 : 0) :
           (a.rank[0] < b.rank[0] ? 1 : 0);
}

vector<int> suffix_array_efficient(string s) {
    mp.clear();
    int n = s.length();

    struct suffix suffixes[n];

    // Store suffixes and their indexes in an array of structures.
    // The structure is needed to sort the suffixes alphabatically
    // and maintain their old indexes while sorting
    for (int i = 0; i < n; i++) {
        suffixes[i].index = i;
        suffixes[i].rank[0] = s[i] - 'a';
        suffixes[i].rank[1] = ((i + 1) < n) ? (s[i + 1] - 'a') : -1;
    }

    // Sort the suffixes using the comparison function
    // defined above.
    sort(suffixes, suffixes + n, cmp_suffix);

    // At his point, all suffixes are sorted according to first
    // 2 characters.  Let us sort suffixes according to first 4
    // characters, then first 8 and so on
    int ind[n];  // This array is needed to get the index in suffixes[]
    // from original index.  This mapping is needed to get
    // next suffix.
    for (int k = 4; k < 2 * n; k = k * 2) {
        // Assigning rank and index values to first suffix
        int rank = 0;
        int prev_rank = suffixes[0].rank[0];
        suffixes[0].rank[0] = rank;
        ind[suffixes[0].index] = 0;

        // Assigning rank to suffixes
        for (int i = 1; i < n; i++) {
            // If first rank and next ranks are same as that of previous
            // suffix in array, assign the same new rank to this suffix
            if (suffixes[i].rank[0] == prev_rank &&
                    suffixes[i].rank[1] == suffixes[i - 1].rank[1]) {
                prev_rank = suffixes[i].rank[0];
                suffixes[i].rank[0] = rank;
            } else { // Otherwise increment rank and assign
                prev_rank = suffixes[i].rank[0];
                suffixes[i].rank[0] = ++rank;
            }
            ind[suffixes[i].index] = i;
        }

        // Assign next rank to every suffix
        for (int i = 0; i < n; i++) {
            int nextindex = suffixes[i].index + k / 2;
            suffixes[i].rank[1] = (nextindex < n) ?
                                  suffixes[ind[nextindex]].rank[0] : -1;
        }

        // Sort the suffixes according to first k characters
        sort(suffixes, suffixes + n, cmp_suffix);
    }

    // Store indexes of all sorted suffixes in the suffix array
    vector<int> suffixArr(n);
    for (int i = 0; i < n; i++) {
        suffixArr[i] = suffixes[i].index;
        cout << suffixArr[i] << " " << s.substr(suffixArr[i]) << endl;
    }

    // Return the suffix array
    return  suffixArr;
}

// the search function - O(nlogn)
void search_efficient(string pattern, string text, vector<int> suffix_array) {
    int n = text.size();
    int m = pattern.size();
    int l = 0, r = n - 1, mid;
    string str_to_compare;
    while (l <= r) {
        // check if pattern is prefix of middle suffix in suffix array
        mid = l + (r - l) / 2;
        str_to_compare = text.substr(suffix_array[mid]);
#ifdef debug
        cout << "comparing pattern: " << pattern << " and str_to_compare: " << str_to_compare << endl;
#endif
        int res = compare_str(pattern, str_to_compare, m);
        if (res == 0) {
            cout << "pattern found at " << suffix_array[mid] << endl;
            return;
        }
        if (res < 0) { r = mid - 1; }
        else { l = mid + 1; }
    }
    cout << "Not found" << endl;
}

int main(int argc, char const *argv[]) {
    string text, pattern;
    cin >> text;
    cin >> pattern;
    vector<int> suffix_array = suffix_array_efficient(text);
    search_efficient(pattern, text, suffix_array);
    return 0;
}