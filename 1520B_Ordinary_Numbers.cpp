#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        int tmp = 1, ans = 0;
        while(tmp <= n) {
            if(n / tmp > 9) ans += 9;
            else ans += n / tmp;
            tmp = 10 * tmp + 1;
        }
        cout << ans << endl;
    }
	return 0;
}
