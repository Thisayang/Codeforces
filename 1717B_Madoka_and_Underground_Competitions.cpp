#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, r, c;
	cin >> t;
	while (t --) {
		cin >> n >> k >> r >> c;
		FOR(i, 1, n + 1) {
			FOR(j, 1, n + 1) {
				if ((i + j) % k == (r + c) % k) cout << "X";
				else cout << ".";
			}
			cout << endl;
		}
	}
	return 0;
}