#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	cin >> s >> t;
	if ((s.length() - 1 + t.length()) % 2 == 1) cout << "Impossible" << endl;
	else {
		int l = 0, r = 0, flg = 1, avg = (s.length() - 1 + t.length()) / 2;
		FOR(i, 0, s.length()) {
			if (s[i] == '|') {
				flg = 0;
				continue;
			}
			if (flg) l ++;
			else r ++;
		}
		if (l > avg || r > avg) cout << "Impossible" << endl;
		else {
			FOR(i, 0, avg - l) cout << t[i];
			FOR(i, 0, l) cout << s[i];
			cout << "|";
			FOR(i, l + 1, s.length()) cout << s[i];
			FOR(i, avg - l, t.length()) cout << t[i];
			cout << endl;
		}
	}
	return 0;
}