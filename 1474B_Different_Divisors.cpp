#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int a[25010] = {1, 1};
ll solve(ll n) {
    ll ans = n;
    if(n == 1) return 6;
    if(n % 2 == 1) ans ++;
    ll i = 1 + ans;
    while(a[i]) i += 2;
    ll j = i + ans;
    while(a[j]) j += 2;
    return i * j;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
    for(int i = 2; i < 501; ++ i) {
        if(a[i] == 1) continue;
        for(int j = 2; i * j <= 25000; ++ j)
            a[i * j] = 1;
    }
    cin >> t;
    while(t --) {
        cin >> n;
        cout << solve(n) << endl;
    }
	return 0;
}
