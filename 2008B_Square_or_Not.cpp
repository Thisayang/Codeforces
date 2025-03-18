#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
	int sqt = int(sqrt(n));
	string s;
	cin >> s;
	if (sqt * sqt != n) {
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < s.length(); ++i) {
		int j = i / sqt;
		int k = i % sqt;
		if ((j == 0 || j == sqt - 1) && s[i] == '0') {
			cout << "NO" << endl;
			return 0;
		} else if ((k == 0 || k == sqt - 1) && s[i] == '0') {
			cout << "NO" << endl;
			return 0;
		} else if (j > 0 && j < sqt - 1 && k > 0 && k < sqt - 1 && s[i] == '1') {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		solve(n);
	}
	return 0;
}