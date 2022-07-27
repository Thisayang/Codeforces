#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, x;
	vector<ll>  a(100010);
	cin >> t;
	while (t --) {
		cin >> n >> x;
		ll sum = 0;
		int cnt = 100, flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
			int tmp = a[i];
			for (int j = 0; j < cnt;) {
				if (tmp % x != 0) {
					cnt = j;
					flg = i;
					break;
				}
				tmp /= x;
				++ j;
			}
		}
		for (int i = 0; i < n; ++ i) {
			if (i < flg) sum += a[i] * (cnt + 1);
			else sum += a[i] * cnt;
		}
		cout << sum << endl;
	}
	return 0;
}