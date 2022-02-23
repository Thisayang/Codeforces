#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        if(n < 2050 || n % 2050 != 0) cout << -1 << endl;
        else {
            ll tmp = n / 2050, ans = 0;
            while(tmp) {
                ans += tmp % 10;
                tmp /= 10;
            }
            cout << ans << endl;
        }
    }
	return 0;
}
