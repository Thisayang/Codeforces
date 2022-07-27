#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, sx, sy;
	cin >> n >> m >> sx >> sy;
	set<pair<int, int>> sett;
	for (int i = sx; i > 0; -- i) {
		cout << i << " " << sy << endl;
		sett.insert(make_pair(i, sy));
	}
	for (int i = sy - 1; i > 0; -- i) {
		cout << 1 << " " << i << endl;
		sett.insert(make_pair(1, i));
	}
	for (int i = 1; i <= n; ++ i) {
		if (i % 2 == 1) {
			for (int j = 1; j <= m; ++ j) {
				if (sett.find(make_pair(i, j)) == sett.end()) {
					cout << i << " " << j << endl;
					sett.insert(make_pair(i, j));
				}
			}
		} else {
			for (int j = m; j > 0; -- j) {
				if (sett.find(make_pair(i, j)) == sett.end()) {
					cout << i << " " << j << endl;
					sett.insert(make_pair(i, j));
				}
			}
		}
	}
	return 0;
}