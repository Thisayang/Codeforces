#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt = 0, mx = -1, ans = 0;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		if (mx < a[i]) {
			cnt = 1;
			mx = a[i];
			ans = 1;
		} else if (mx == a[i]) {
			if (a[i - 1] == mx) {
				cnt ++;
				ans = max(ans, cnt);
			} else {
				cnt = 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}