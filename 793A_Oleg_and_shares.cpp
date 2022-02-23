#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k, a[100010];
	while(cin >> n >> k) {
		ll Min = 1000000000, ans = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i], Min = min(Min, a[i]);
		for(int i = 0; i < n; ++ i) {
			if((a[i] - Min) % k != 0) {
				ans = -1;
				break;
			}
			ans += (a[i] - Min) / k;
		}
		cout << ans << endl;
	}
	return 0;
}
