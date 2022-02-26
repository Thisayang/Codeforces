#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, l, r, k;
	cin >> t;
	while (t --) {
		cin >> n >> l >> r >> k;
		int a[110];
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		sort(a, a + n);
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (a[i] < l) continue;
			if (a[i] > r) break;
			if(k < a[i]) break;
			k -= a[i];
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}