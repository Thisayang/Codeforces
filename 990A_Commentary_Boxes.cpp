#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m, a, b, ans = 0;
	cin >> n >> m >> a >> b;
	if (n % m != 0) {
		ans = min(n % m * b, (m - (n % m)) * a);
	}
	cout << ans << endl;
	return 0;
}