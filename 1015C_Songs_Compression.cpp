#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m, x, y, sum = 0;
	vector<pair<ll, ll>> vec;
	cin >> n >> m;
	FOR(i, 0, n) {
		cin >> x >> y;
		sum += x;
		vec.emplace_back(make_pair(x, y));
	}
	int ans = 0;
	sort(vec.begin(), vec.end(), [&] (pair<ll, ll> a, pair<ll, ll> b) {
		return (a.first - a.second) >(b.first - b.second);
	});
	FOR(i, 0, n) {
		if (sum > m) {
			ans ++;
			sum -= vec[i].first - vec[i].second;
		} else break;
	}
	cout << (sum <= m ? ans : -1) << endl;
	return 0;
}