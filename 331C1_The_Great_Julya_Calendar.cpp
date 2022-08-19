#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	cin >> n;
	while (n > 0) {
		ans ++;
		int m = n, mx = 0;
		while (m > 0) {
			mx = max(mx, m % 10);
			m /= 10;
		} 
		n -= mx;
	}
	cout << ans << endl;
	return 0;
}