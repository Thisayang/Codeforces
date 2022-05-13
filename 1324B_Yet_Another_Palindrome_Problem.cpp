#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[5010];
	cin >> t;
	while (t --) {
		cin >> n;
		int x[5010][5] = {0};
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int flg = 0;
		for (int i = 0; i < n; ++ i) {
			if (x[a[i]][0] > 2) {
				flg = 1;
				break;
			}
			if (x[a[i]][0] == 0) {
				x[a[i]][0] ++;
				x[a[i]][1] = i;
			} else {
				if (i - x[a[i]][1] > 1) {
					flg = 1;
				} else {
					x[a[i]][0] ++;
					x[a[i]][2] = i;
				}
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}