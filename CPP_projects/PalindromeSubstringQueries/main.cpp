#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

// This program doesn't handle overflows.
// for that, we just need to add modulo to every multiplication operation
// also, for diverse characters remove " - '0'" and set d = 256
#define d 26 
//#define debug
typedef long long ll;
ll *prefix, *suffix;

int main() {
	string s; // input string
	int q, l, _q; // no. of queries, length of string

	cin >> s >> q;
	l = s.length();
	_q = q;

	prefix = new long long[l + 1];
	suffix = new long long[l + 1];

	// create hash from starting and end
	double mult;
	prefix[0] = 0; //(long long) s[0] - '0';
	for (int i = 1; i <= l; i++) {
		mult = d;
		prefix[i] = ((long long) s[i - 1] - '0') + mult * prefix[i - 1];
	}
	reverse(s.begin(), s.end());
	suffix[0] = 0;//(long long) s[0] - '0';
	for (int i = 1; i <= l; i++) {
		mult = d;
		suffix[i] = ((long long) s[i - 1] - '0') + mult * suffix[i - 1];
	}
	reverse(s.begin(), s.end());

#ifdef debug
	cout << "String: " << s << endl;
	cout << "Prefix array:" << endl;
	for (int i = 0; i <= l; i++) {
		cout << prefix[i] << " ";
	}
	cout << endl;

	cout << "Suffix array:" << endl;
	for (int i = 0; i <= l; i++) {
		cout << suffix[i] << " ";
	}
	cout << endl;
#endif

	// let's see them queries
	int left, right;
	bool ans;
	while (_q--) {
		cin >> left >> right;
		long long pehla = (prefix[right + 1] - (prefix[left] * (pow(d, right - left + 1))));
		long long dusra = (suffix[l - left] - (suffix[l - right - 1] * (pow(d, right - left+1))));
#ifdef debug
		cout << prefix[right + 1] << " " << prefix[left] << " " << suffix[l - left] << " " << suffix[l - right - 1] << endl;
		cout << pehla << " " << dusra << endl;
#endif
		ans = pehla == dusra;
		cout << (ans ? "YES" : "NO") << endl;
	}

	return 0;
}
