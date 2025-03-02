#include <bits/stdc++.h>

using namespace std;

void Solve(int n) {
	string s;
	int ans = 0;
	cin >> s;
	for (int i = 0; i < n - 1; ++i) {
		if (s[i + 1] == '@') {
			++ans;
		} else if (s[i + 2] == '@') {
			++ans;
			++i;
		} else if (s[i + 1] == '*' && s[i + 2] == '.') {
			++i;
		} else if (s[i + 1] == '*' && s[i + 2] == '*') {
			break;
		}
	}
	cout << ans << endl;
	return ;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}