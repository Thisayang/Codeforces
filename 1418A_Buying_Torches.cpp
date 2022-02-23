#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, x, y, k;
    cin >> t;
    while(t --) {
        cin >> x >> y >> k;
        ll ans = 0, sum = k * (y + 1);
        ans += (sum + x - 3) / (x - 1);
        ans += k;
        cout << ans << endl;
    }
	return 0;
}