#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#define d 10
#define debug
long long *prefix, *suffix;

int main() {
	string s; // input string
	int q, l, _q; // no. of queries, length of string

	cin >> s >> q;
	l = s.length();
	_q = q;

	prefix = new long long[l];
	suffix = new long long[l];

	// create hash from starting and end
	double mult;
	prefix[0] = (long long) s[0] - '0';
	suffix[l - 1] = (long long) s[l - 1] - '0';
	for (int i = 1; i < l; i++) {
		mult = d;
		prefix[i] = ((long long) s[i] - '0') + mult * prefix[i - 1];
		suffix[l - i - 1] = ((long long) s[l - i - 1] - '0') + mult * suffix[l - i];
	}

#ifdef debug
	cout << "Prefix array:" << endl;
	for (int i = 0; i < l; i++) {
		cout << prefix[i] << " ";
	}
	cout << endl;

	cout << "Suffix array:" << endl;
	for (int i = 0; i < l; i++) {
		cout << suffix[i] << " ";
	}
	cout << endl;
#endif

	// let's see them queries
	int left, right;
	bool ans;
	while (_q--) {
		cin >> left >> right;
		long long pehla = (prefix[right] - (left != 0 ? prefix[left] : 0));
		long long dusra = (suffix[left] - suffix[right] * pow(d, right) + ((s[right]-'0')* pow(10, right)));
#ifdef debug
		cout << prefix[right] << " " << prefix[left] << " " << suffix[left] << " " << suffix[right] << endl;
		cout << pehla << " " << dusra << endl;
#endif
		ans = pehla == dusra;
		cout << (ans ? "YES" : "NO") << endl;
	}

	return 0;
}
