#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll num(ll s) {
    ll n = 0, m = 1;
    while(s > 0) {
        ll x = s % 10;
        n += x * m;
        if(x != 0) m *= 10;
        s /= 10;
    }
    return n;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll a, b;
    cin >> a >> b;
    ll sum = a + b;
    if(num(sum) != num(a) + num(b)) cout << "NO" << endl;
    else cout << "YES" << endl;
	return 0;
}
