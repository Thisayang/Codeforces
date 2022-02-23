#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n;
    ld ans = 0.0;
    cin >> n;
    while(n) {
        ans += 1.0 / double(n);
        n --;
    }
    cout << ans << endl;
	return 0;
}
