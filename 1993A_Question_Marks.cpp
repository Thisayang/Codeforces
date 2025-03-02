#include <bits/stdc++.h>

using namespace std;
void Solve(int n) {
	string s;
	int cnt[4] = {0};
	int ans = 0;
	cin >> s;
	for (int i = 0; s[i] != 0; ++i) {
		if (s[i] != '?') {
			++cnt[s[i] - 'A'];
		}
	}
	for (int i = 0; i < 4; ++i) {
		ans += min(cnt[i], n);
	}
	cout << ans << endl;
}
int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
}