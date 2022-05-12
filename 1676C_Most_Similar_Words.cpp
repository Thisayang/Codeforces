#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, m, n;
	string s[60];
	cin >> t;
	while (t --) {
		cin >> m >> n;
		int ans = 10000010;
		for (int i = 0; i < m; ++ i) {
			cin >> s[i];
			for (int j = i - 1; j >= 0; -- j) {
				int tmp = 0;
				for (int k = 0; k < n; ++ k) {
					tmp += abs(s[i][k] - s[j][k]);
				}
				ans = min(ans, tmp);
			}
		}
		cout << ans << endl;
	}
	return 0;
}