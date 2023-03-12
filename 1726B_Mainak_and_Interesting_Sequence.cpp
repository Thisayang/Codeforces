#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		if (m < n || (n % 2 == 0 && m & 1)) cout << "No" << endl;
		else if (m % n == 0) {
			cout << "Yes" << endl;
			FOR(i, 0, n) cout << m / n << " ";
			cout << endl;
		} else {
			vector<int> a(n, 1);
			a[n - 1] = m - n + 1;
			if (n % 2 == 0) {
				m -= (n - 2);
				a[n - 2] = a[n - 1] = m / 2;
			}
			cout << "Yes\n";
			FOR(i, 0, n) cout << a[i] << " ";
			cout << endl;
		}
	}
	return 0;
}