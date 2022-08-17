#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, tmp;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		int ans = 0;
		FOR(i, 1, n + 1) {
			cin >> tmp;
			if (i <= k && tmp > k) ans ++; 
		}
		cout << ans << endl;
	}
	return 0;
}