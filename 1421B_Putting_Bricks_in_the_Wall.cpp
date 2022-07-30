#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<string> v(n);
		FOR(i, 0, n) {
			cin >> v[i];
		}
		int ans = 0;
		ans += v[0][1];
		ans += v[1][0];
		ans += v[n - 1][n - 2];
		ans += v[n - 2][n - 1];
		ans -= '0' * 4;
		if (ans == 4 || ans == 0) {
			cout << 2 << endl;
			cout << "1 2\n2 1" << endl;
		} else if (ans == 1 || ans == 3) {
			cout << 1 << endl;
			if (v[0][1] != v[1][0]) {
				if (v[0][1] == v[n - 1][n - 2]) cout << "1 2" << endl;
				else cout << "2 1" << endl;
			} else {
				if (v[0][1] == v[n - 1][n - 2]) cout << n << " " << n - 1 << endl;
				else cout << n - 1 << " " << n << endl;
 			} 
		} else if (ans == 2 ) {
			if (v[0][1] == v[1][0]) cout << 0 << endl;
			else if (v[0][1] == v[n - 2][n- 1]) {
				cout << 2 << endl;
				cout << "1 2\n" << n << " " << n - 1 << endl;
			} else {
				cout << 2 << endl;
				cout << "1 2\n" << n - 1 << " " << n << endl;
			}
		}
	}
	return 0;
}