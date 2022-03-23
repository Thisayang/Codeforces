#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[70];
	cin >> t;
	while (t --) {
		cin >> n;
		ll cnt0 = 1, cnt1 = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] == 0) cnt0 *= 2;
			else if (a[i] == 1) cnt1 ++;
		}
		cout << cnt0 * cnt1 << endl;
	}
	return 0;
}