#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		vector<int> a(n);
		set<int> sett;
		FOR(i, 0, n) {
			cin >> a[i];
			sett.insert(a[i]);
		}
		int ans = (n + k - 1) / k;
		for (auto it = sett.begin(); it != sett.end(); ++ it) {
			int cnt = 0;
			int f = *it;
			FOR(i, 0, n) {
				int flg = 0;
				if (a[i] != f) {
					cnt ++;
					i = i + k - 1;
				}
			}
			ans = min(ans, cnt);
		}
		cout << ans << endl;
	}
	return 0;
}