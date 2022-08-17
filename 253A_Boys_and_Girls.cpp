#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	while (cin >> n >> m) {
		if (n >= m) {
			FOR(i, 0, m) cout << "BG";
			FOR(i, 0, n - m) cout << "B";
		} else {
			FOR(i, 0, n) cout << "GB";
			FOR(i, 0, m - n) cout << "G";
		}
		cout << endl;
	}
	return 0;
}