#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<vector<char>> a(n, vector<char>(m));
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			cin >> a[i][j];
		}
	}
	int x[] = {1, -1 , 0, 0}, y[] = {0, 0, 1, -1};
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			if (a[i][j] == '.') {
				if ((i + j) % 2 == 0) a[i][j] = 'B';
				else a[i][j] = 'W';
			}
		}
	}
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}