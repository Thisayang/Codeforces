#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int m;
	int num = 7;
	string s;
	cin >> t;
	while (t--) {
		int cnt[num] = {0};
		int ans = 0;
		cin >> n >> m >> s;
		for (int i = 0; i < n; ++i) {
			++cnt[s[i] - 'A'];
		}
		for (int i = 0; i < num; ++i) {
			ans += max(0, m - cnt[i]);
		}
		cout << ans << endl;
	}
	return 0;
}