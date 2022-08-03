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
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		cout << 3 * n << endl;
		FOR(i, 0, 3 * n / 6) {
			cout << 2 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
			cout << 1 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
			cout << 1 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
			cout << 2 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
			cout << 1 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
			cout << 1 << " " << i * 2 + 1 << " " << i * 2 + 2 << endl;
		}
	}
	return 0;
}