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
	if (m == 0) cout << "YES" << endl;
	else {
		vector<int> a(m);
		FOR(i, 0, m) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		if (1 == a[0] || a[m - 1] == n) cout << "NO" << endl;
		else {
			int cnt = 1;
			int flg = 1;
			for (int i = 2; i < m; ++ i) {
				if (a[i] - a[i - 1] == 1 && a[i] - a[i - 2] == 2) {
					flg = 0;
					break;
				}
			}
			cout << (flg == 1 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}