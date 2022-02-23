#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			ll ans = 0;
			for(ll i = 1, j = 1; i <= n / 2; ++ i, ++ j) {
				ans += i * 8 * j;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
