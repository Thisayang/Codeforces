#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[15];
	cin >> n >> m;
	FOR(i, 0, n) {
		cin >> s[i];
	}
	int x[] = {1, -1, 0, 0}, y[] = {0, 0, 1, -1}, ans = 0;
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			if (s[i][j] == 'P') {
				FOR(k, 0, 4) {
					if (i + x[k] >= 0 && i + x[k] < n && j + y[k] >= 0 && j + y[k] < m && s[i + x[k]][j + y[k]] == 'W') {
						s[i][j] = '.';
						s[i + x[k]][j + y[k]] = '.';
						ans ++;
						break;
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}