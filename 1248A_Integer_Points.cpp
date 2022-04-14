#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a;
	cin >> t;
	while (t --) {
		cin >> n;
		ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			if (a % 2 == 1) cnt1 ++;
			else cnt2 ++;
		}
		cin >> m;
		for (int i = 0; i < m; ++ i) {
			cin >> a;
			if (a % 2 == 1) cnt3 ++;
			else cnt4 ++;
		}
		cout << cnt1 * cnt3 + cnt2 * cnt4 << endl;
	}
	return 0;
}