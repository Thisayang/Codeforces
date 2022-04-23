#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string tmp;
	cin >> t;
	while (t --) {
		ll ans = 0;
		map<string, ll> m;
		cin >> n;
		m.clear();
		for (int i = 0; i < n; ++ i) {
			cin >> tmp;
			m[tmp] ++;
		}
		map <string, int> mp;
		for (auto it = m.begin(); it != m.end(); ++ it) {
			for (auto itt = m.begin(); itt != m.end(); ++ itt) {
				if (it == itt) continue;
				string s = it -> first, t = itt -> first;
				if (s[0] == t[0] || s[1] == t[1]) {
					if (mp.count(s + t) == 0) {
						ans += (it -> second) * (itt -> second);
						mp[s + t] = 1;
						mp[t + s] = 1;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}