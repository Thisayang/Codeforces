#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<vector<int>> dp(2, vector<int> (n + 1, 0));
		FOR(i, 1, n + 1) {
			cin >> x;
			dp[i & 1][x] = max(dp[i & 1][x], dp[(i ^ 1) & 1][x] + 1);
		}
		FOR(i, 1, n + 1) {
			cout << max(dp[0][i], dp[1][i]) << " \n"[i == n];
		}
	}
	return 0;
}