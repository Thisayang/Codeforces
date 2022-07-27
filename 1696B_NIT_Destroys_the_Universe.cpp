#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = 1, flg = 0, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] == 0) {
				cnt ++;
			}
		}
		if (cnt == 0) cout << 1 << endl;
		else if (cnt == n) {
			cout << 0 << endl;
		} else {
			for (int i = 0; i < n; ++ i) {
				if (a[i] != 0 && flg == 0) flg = 1;
				if (a[i] == 0 && flg == 1) flg = 2;
				if (a[i] != 0 && flg == 2) ans = 2;
			}
			cout << ans << endl;
		}
	}
	return 0;
}