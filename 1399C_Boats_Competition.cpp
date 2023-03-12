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
		vector<int> a(n);
		set<int> sett;
		map<int, int> mp;
		FOR(i, 0, n) {
			cin >> a[i];
			mp[a[i]] ++;
			FOR(j, 0, i) {
				sett.insert(a[i] + a[j]);
			}
		}
		int ans = 0, cnt = 0;
		for (auto it = sett.begin(); it != sett.end(); ++ it) {
			map<int, int> tmp = mp;
			int x = *it;
			for (auto itt = tmp.begin(); itt != tmp.end(); ++ itt) {
				if (x == itt -> first * 2) cnt += itt->second / 2;
				else cnt += min(itt->second, tmp[x - itt->first]);
				itt->second = 0;
			}
			ans = max(ans, cnt);
			cnt = 0;
		}
		cout << ans << endl;
	}
	return 0;
}