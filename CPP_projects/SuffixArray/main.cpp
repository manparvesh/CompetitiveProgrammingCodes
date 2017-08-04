#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;

//#define debug

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
		if (pattern[i] < text[i]) return -1;
		if (pattern[i] > text[i]) return 1;
	}
	return 0;
}

// O ( N Log(n)^2 ) building

vector<string> suffix_array_efficient(string s) {
	mp.clear();
	int n = s.length();

	//todo
	vector<string> v;
	return v;
}

// the search function - O(nlogn)
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
		if (res < 0) r = mid - 1;
		else l = mid + 1;
	}
	cout << "Not found" << endl;
}

int main(int argc, char const *argv[]) {
	string text, pattern;
	cin >> text;
	cin >> pattern;
	vector<string> suffix_array = suffix_array_simple(text);
	search(pattern, text, suffix_array);
	return 0;
}