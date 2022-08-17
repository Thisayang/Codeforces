#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, l, ans = 0, res = 1;
	string s;
	cin >> n >> k >> s;
	l = s.length();
	map<char, int> mp;
	FOR(i, 0, l) {
		if (k == 1) {
			mp[s[i]] ++;
			ans = max(ans, mp[s[i]]);
		} else {
			if (s[i] == s[i + 1]) {
				res ++;
			} else {
				res = 1;
			}
			if (res == k) {
				mp[s[i]] ++;
				i ++;
				ans = max(ans, mp[s[i]]);
				res = 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}