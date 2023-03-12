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
		int l = -1, r = -1;
		FOR(i, 0, n) {
			if (s[i] == '1') {
				l = i;
				break;
			}
		}
		ROF(i, n - 1, -1) {
			if (s[i] == '0') {
				r = i;
				break;
			}
		}
		if (l != -1 && r != -1 && l < r) {
			FOR(i, 0, l) cout << s[i];
			FOR(i, r, n) cout << s[i];
			cout << endl;
		} else cout << s << endl;
	}
	return 0;
}