#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] % 2 == 1) cnt1 ++;
			else cnt2 ++;
		}
		if (cnt1 % 2 == 0) cout << "YES" <<endl;
		else {
			sort(a, a + n);
			int flg = 0;
			for (int i = 1; i < n; ++ i) {
				if (a[i] - a[i - 1] == 1) {
					cnt1 --;
					cnt2 --;
					if (cnt1 % 2 == 0) {
						flg = 1;
						break;
					}
					++ i;
				}
			}
			cout << (flg == 1 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}