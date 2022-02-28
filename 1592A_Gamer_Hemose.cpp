#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, h, a[1010];
	cin >> t;
	while (t --) {
		cin >> n >> h;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n == 1) {
			cout << (h % a[0] == 0 ? h /a[0] : h / a[0] + 1) << endl;
		} else {
			sort(a, a + n, cmp);
			int max = a[0] + a[1];
			int cnt = h / max;
			if (h % max == 0) cout << cnt * 2 << endl;
			else if (h - cnt * max <= a[0]) cout << cnt * 2 + 1 << endl;
			else cout << cnt * 2 + 2 << endl;
		}
		
	}
	return 0;
}