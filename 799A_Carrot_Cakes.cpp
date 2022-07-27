#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int ans = (n + k - 1) / k * t, cnt;
	int flg = d / t * k;
	if (flg >= n) cout << "NO" << endl;
	else {
		for (int i = d, j = d / t * t; flg < n; ) {
			j += t;
			flg += k;
			if (flg >= n) {
				cnt = j;
				break;
			}
			i += t;
			flg += k;
			if (flg >= n) {
				cnt = i;
				break;
			}
		}
		if (cnt >= ans) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;	
}