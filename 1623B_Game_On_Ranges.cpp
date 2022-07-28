#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
	if (a.second != b.second) return a.second < b.second;
	return a.first < b.first;
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, l, r;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n + 1, 0);
		vector<pair<int, int>> v, ans;
		map<pair<int, int>, int> mp;
		FOR(i, 0, n) {
			cin >> l >> r;
			v.push_back(make_pair(l, r));
		}
		ans = v;
		sort(v.begin(), v.end(), cmp);
		FOR(i, 0, n) {
			l = v[i].first;
			r = v[i].second;
			FOR(j, l, r + 1) {
				if (a[j] == 0) {
					mp[make_pair(l, r)] = j;
					a[j] = 1;
					break;
				}
			}
		}
		FOR(i, 0, n) {
			cout << ans[i].first << " " << ans[i].second << " " << mp[ans[i]] << endl;
		}
		cout << endl;
	}
	return 0;
}