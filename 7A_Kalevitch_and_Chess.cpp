#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s[8];
	int ans = 0;
	FOR(i, 0, 8) cin >> s[i];
	FOR(i, 0, 8) {
		int c1 = 0, c2 = 0;
		FOR(j, 0, 8) {
			if (s[i][j] == 'B') c1 ++;
			if (s[j][i] == 'B') c2 ++;
		}
		if (c1 == 8) ans ++;
		if (c2 == 8) ans ++;
	}
	cout << (ans == 16 ? 8 : ans) << endl;
	return 0;
}