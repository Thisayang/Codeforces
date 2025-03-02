#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
	int ans = s.length();
	for (int i = 0; i < s.length() - 1; ++i) {
		if (s[i] == s[i + 1]) {
			ans = 1;
			break;
		}
	}
	cout << ans << endl;
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