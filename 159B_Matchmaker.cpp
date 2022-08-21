#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, x, y, ans = 0, cnt = 0;
	cin >> n >> m;
	map<pair<int, int>, int> mp;
	map<int, int> mpp;
	FOR(i, 0, n) {
		cin >> x >> y;
		mpp[y] ++;
		mp[make_pair(x, y)] ++;
	}
	FOR(i, 0, m) {
		cin >> x >> y;
		if (mpp[y] > 0) {
			mpp[y] --;
			ans ++;
		}
		if (mp[make_pair(x, y)] > 0) {
			cnt ++;
			mp[make_pair(x, y)] --;
		}
	}
	cout << ans << " " << cnt << endl;
	return 0;
}