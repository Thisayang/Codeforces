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
		sort(a.begin(), a.end());
		int ans = 0;
		FOR(i, 0, n) {
			int ok = a[i], tmp = 1;
			if (ok == tmp) ans ++;
			else {
				for (int j = i + 1; j < n; ++ j) {
					if (a[j] > ok) ok = a[j], tmp ++;
					else tmp ++;
					if (tmp == ok) {
						ans ++;
						i = j;
						break;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}