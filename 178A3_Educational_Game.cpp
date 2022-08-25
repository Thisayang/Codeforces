#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, sum = 0, tmp = 0, ans = 0;
	cin >> n;
	vector<ll> a(n + 1);
	FOR(i, 1, n) cin >> a[i];
	FOR(i, 1, n) {
		int cnt = 1;
		while (i + cnt <= n) {
			cnt *= 2;
		} 
		sum += a[i];
		a[i + cnt / 2] += a[i];
		cout << sum << endl;
	}
	return 0;
}