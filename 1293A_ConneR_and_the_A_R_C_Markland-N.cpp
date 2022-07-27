#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, s, k, tmp;
	cin >> t;
	while (t --) {
		vector<int> a(1010);
		cin >> n >> s >> k;
		FOR(i, 0, k) {
			cin >> a[i];
		}
		sort(a.begin(), a.begin() + k);
		int ans = 0, d = 0, u = n + 1;
		if (find(a.begin(), a.end(), s) != a.end()) {
			ROF(i, s - 1, 0) {
				if (find(a.begin(), a.end(), i) == a.end()) {
					d = i;
					break;
				}
			}
			FOR(i, s + 1, n + 1) {
				if (find(a.begin(), a.end(), i) == a.end()) {
					u = i;
					break;
				}
			}
		} 
		if (d != 0 && u != n + 1) ans = min(s - d, u - s);
		else if (d == 0 && u != n + 1) ans = u - s;
		else if (d != 0 && u == n + 1) ans = s - d;
		cout << ans << endl;
	}
	return 0;
}