#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, m, x, ans;
    while(cin >> t) {
        while(t --) {
            cin >> n >> m >> x;
            if(x % n == 0) ans = (n * m) - (m - x / n);
            else ans = (x % n - 1) * m + (x / n) + 1;
            cout << ans << endl;
        }
    }
	return 0;
}
