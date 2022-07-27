#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, q, d, a;
	int dp[207];
	cin >> t;
	while (t --) {
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		cin >> q >> d;
		int mx = d * 10;
		for (int i = 0; 10 * i + d <= mx; ++ i) {
			for (int j = 0; 10 * i + d + j <= mx; j += d) {
				dp[10 * i + d + j] = dp[j];
				
			}
		}
		for (int i = 0; i < q; ++ i) {
			cin >> a;
			if (a >= d * 10 ||dp[a]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}