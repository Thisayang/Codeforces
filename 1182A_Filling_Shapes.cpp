#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
    cin >> n;
    if(n % 2 == 1) cout << 0 << endl;
    else {
        n = n / 2;
        ll ans = 1, sum = 2;
        while(n != 0) {
            if(n & 1) ans *= sum;
            sum *= sum;
            n >>= 1;
        }
        cout << ans << endl;
    }
	return 0;
}
