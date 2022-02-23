#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll a[200010] = {0};
void solve(ll num, ll n) {
    ll st = 1, end = n;
    while(1) {
        if(num > a[(st + end) / 2]) st = (st + end) / 2 + 1;
        else if(num <= a[(st + end) / 2] && num > a[(st + end) / 2 - 1]) {
            cout << (st + end) / 2 << ' ' << num - a[(st + end) / 2 - 1] << endl;
            return;
        }    
        else end = (st + end) / 2 - 1;
    }
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m, s, tmp;
    cin >> n >> m;
    for(int i = 1; i <= n; ++ i)  {
        cin >> s;
        a[i] = a[i - 1] + s;
    }
    for(int i = 0; i < m; ++ i) {
        cin >> tmp;
        solve(tmp, n);
    }
	return 0;
}
