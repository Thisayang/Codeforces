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
		vector<ll> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout << a[n - 1] + a[n - 2] - a[0] - a[1] << endl;
	}
	return 0;
}