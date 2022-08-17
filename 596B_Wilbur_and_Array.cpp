#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, ans = 0, cnt = 0, a;
	cin >> n;
	FOR(i, 0, n) {
		cin >> a;
		ans += abs(a - cnt);
		cnt = a;
	}
	cout << ans << endl;
	return 0;
}