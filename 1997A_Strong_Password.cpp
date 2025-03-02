#include <bits/stdc++.h>

using namespace std;

void Solve(void) {
	string s;
	cin >> s;
	int flg = 1;
	cout << s[0];
	if (s.length() == 1) {
		if (s[0] != 'a') {
			cout << char(s[0] - 1);
		} else {
			cout << 'b';
		}
		flg = 0;
	} 
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == s[i - 1] && flg) {
			flg = 0;
			if (s[i] != 'a') {
				cout << char(s[i] - 1);
			} else {
				cout << 'b';
			}
		}
		cout << s[i];
	}
	if (flg) {
		if (s[s.length() - 1] != 'a') {
			cout << char(s[s.length() - 1] - 1);
		} else {
			cout << 'b';
		}
	}
	cout << endl;
	return ;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}