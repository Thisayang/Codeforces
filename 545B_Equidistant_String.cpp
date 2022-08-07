#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	int cnt = 0;
	cin >> s >> t;
	FOR(i, 0, s.length()) {
		if (s[i] != t[i]) cnt ++;
	}
	if (cnt & 1) cout << "impossible";
	else {
		int ct = 0;
		FOR(i, 0, s.length()) {
			if (s[i] != t[i]) {
				if (ct < cnt / 2) cout << s[i];
				else cout << t[i];
				ct ++;
			} else cout << s[i];
		}
	}
	return 0;
}