#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m, k, a[1010];
	cin >> n >> m >> k;
	int ans = m;
	for (int i = 0; i <= m; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < m; ++ i) {
		int tmp = a[i] ^ a[m], cnt = 0;
		while (tmp > 0) {
			if (tmp % 2 == 1) cnt ++;
			tmp /= 2;
		}
		if (cnt > k) ans --;
	}
	cout << ans << endl;
	return 0;
}