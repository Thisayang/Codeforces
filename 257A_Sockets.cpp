#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int sum = k, ans = -1;
	if (sum >= m) ans = 0;
	else {
		FOR(i, 0, n) {
			sum += a[i] - 1;
			if (sum >= m) {
				ans = i + 1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}