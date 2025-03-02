#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
	for (int i = s.length() - 1; i >= 0; --i) {
		if (s[i] == 'p') {
			cout << 'q';
		} else if (s[i] == 'q') {
			cout << 'p';
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return ;
}

int main(void) {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		solve(s);
	}
	return 0;
}