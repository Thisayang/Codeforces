#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n), b(n);
		map<int, int> mp;
		FOR(i, 0, n) {
			cin >> a[i];
			mp[a[i]] ++;
			b[i] = mp[a[i]];
		}
		int ans = 0;
		set<int> sett;
		ROF(i, n - 1, -1) {
			if (b[i] == mp[a[i]] - 1) {
				ans = max(i + 1, ans);
			}
		}
		cout << ans << endl;
	}
	return 0;
}