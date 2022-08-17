#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k, a, b, ans = 0, flg = 0;
	cin >> n >> m >> k;
	vector< vector<int>> x(n + 1, vector<int> (m + 1, 0));
	FOR(i, 0, k) {
		cin >> a >> b;
		x[a][b] = 1;
		if (i >= 3 && flg == 0) {
			if (a - 1 > 0 && b - 1 > 0 && x[a - 1][b - 1] + x[a][b - 1] + x[a - 1][b] == 3) {
				flg = 1;
			} else if (a + 1 <= n && b - 1 > 0 && x[a + 1][b] + x[a][b - 1] + x[a + 1][b - 1] == 3) {
				flg = 1;
			} else if (a - 1 > 0 && b + 1 <= m && x[a - 1][b] + x[a - 1][b + 1] + x[a][b + 1] == 3) {
				flg = 1;
			} else if (a + 1 <= n && b + 1 <= m && x[a][b + 1] + x[a + 1][b] + x[a + 1][b + 1] == 3){
				flg = 1;
			}
			if (flg == 1) ans = i + 1;
		}
	}
	cout << ans << endl;
	return 0;
}