#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int T;
	string s, t;
	cin >> T;
	while (T --) {
		cin >> s >> t;
		reverse(s.begin(), s.end());
		reverse(t.begin(), t.end());
		int flg = -1, flg2 = -1;
		FOR(i, 0, t.length()) {
			if (t[i] == '1') {
				flg = i;
				break;
			}
		}
		FOR(i, 0, s.length()) {
			if (s[i] == '1') {
				flg2 = i;
				if (flg2 < flg) continue;
				else break;
			}
		}
		if (flg2 == 0 && flg > flg2) cout << 0 << endl;
		else cout << flg2 - flg << endl;
	}
	return 0;
}