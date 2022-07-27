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
		set<int> sett;
		map<int, int> mp;
		vector<int> a(n);
		int ans = -1, mn = 0, tmp;
		FOR(i, 0, n) {
			cin >> tmp;
			if (mp.count(tmp) == 0) {
				mp[tmp] = i;
			} else {
				int cnt = i - mp[tmp];
				mp[tmp] = i;
				mn = n - cnt;
				ans = max(ans, mn);
			}
		}
		cout << ans << endl;
	}
	return 0;
}