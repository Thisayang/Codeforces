#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[200010];
	cin >> t;
	while (t --) {
		cin >> n;
		int max = -2e9, flg = -1;
		ll ans = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(i != 0) {
				ans = ans > a[i] * a[i - 1] ? ans : a[i] * a[i - 1];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
