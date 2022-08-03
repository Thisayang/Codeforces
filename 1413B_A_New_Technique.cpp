#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
int a[250010], c[510][510];
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int x;
		FOR(i, 1, n + 1) {
			FOR(j, 1, m + 1) {
				cin >> x;
				a[x] = j;
			}
		}
		FOR(i, 1, m + 1) {
			FOR(j, 1, n + 1) {
				cin >> x;
				c[j][a[x]] = x;
			}
		}
		FOR(i, 1, n + 1) {
			FOR(j, 1, m + 1) {
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}