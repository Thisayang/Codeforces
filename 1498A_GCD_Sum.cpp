#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll gcd(ll n, ll sum) {
    if(n < sum) {
        ll tmp = sum;
        sum = n;
        n = tmp;
    }
    return sum == 0 ? n : gcd(sum, n % sum);
}
ll solve(ll n) {
    ll ans, tmp, sum;
    while(n) {
        tmp = n, sum = 0;
        while(tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        ans = gcd(n, sum);
        if(ans == 1) n ++;
        else return n;
    }
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        cout << solve(n) << endl;
    }
	return 0;
}
