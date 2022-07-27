#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, l, r;
	cin >> t;
	while (t --) {
		cin >> n >> l >> r;
		int flg = 0;
		vector<int> x(n);
		FOR(i, 0, n) {
			if (((l + i) / (i + 1) * (i + 1)) > r) {
				flg = 1;
				cout << "NO";
				break;
			} else x[i] = (l + i) / (i + 1) * (i + 1);
		}
		if (flg == 0) {
			cout << "YES" << endl;
			FOR(i, 0, n) {
				cout << x[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}