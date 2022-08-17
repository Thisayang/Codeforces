#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int c[4] = {0}, r = -1, b = -1, y = -1, g = -1, flg[4] = {0};
	cin >> s;
	FOR(i, 0, s.length()) {
		if (s[i] == '!') c[i % 4] ++;
		else {
			if (s[i] == 'R') r = i % 4;
			else if (s[i] == 'B') b = i % 4;
			else if (s[i] == 'Y') y = i % 4;
			else if (s[i] == 'G') g = i % 4;
			flg[i % 4] = 1;
		}
		
	}
	if (r == -1) {
		FOR(i, 0, 4) {
			if (flg[i] == 0) r = i, flg[i] = 1;
		}
	}
	if (b == -1) {
		FOR(i, 0, 4) {
			if (flg[i] == 0) b = i, flg[i] = 1;;
		}
	}
	if (y == -1) {
		FOR(i, 0, 4) {
			if (flg[i] == 0) y = i, flg[i] = 1;
		}
	}
	if (g == -1) {
		FOR(i, 0, 4) {
			if (flg[i] == 0) g = i, flg[i] = 1;
		}
	}
	cout << c[r] << " " << c[b] << " " << c[y] << " " << c[g] << endl;
	return 0;
}