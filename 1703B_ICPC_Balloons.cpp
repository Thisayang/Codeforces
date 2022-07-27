#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		set<char> ch;
		int ans = 0;
		FOR(i, 0, s.length()) {
			if (ch.find(s[i]) == ch.end()) {
				ch.insert(s[i]);
				ans += 2;
			} else {
				ans += 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}