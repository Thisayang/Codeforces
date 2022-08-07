#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		cin >> k;
		char tmp;
		map<int, int> mp;
		FOR(i, 0, k) {
			cin >> tmp;
			mp[tmp] ++;
		}
		int l = 0, r = 0, ans = 0;
		FOR(i, 0, n) {
			if (mp[s[i]] > 0) {
				l = r;
				r = i;
				ans = max(ans, r - l);
			}
		}
		cout << ans << endl;
	}
	return 0;
}