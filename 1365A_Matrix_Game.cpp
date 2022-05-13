#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[60][60];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				if (a[i][j] == 0) {
					int flg = 0;
					for (int k = 0; k < n; ++ k) {
						if (a[k][j] == 1) {
							flg = 1;
							break;
						}
					}
					if (flg == 1) continue;
					for (int k = 0; k < m; ++ k) {
						if (a[i][k] == 1) {
							flg = 1;
							break;
						}
					}
					if (flg == 1) continue;
					else {
						a[i][j] = 1;
						cnt ++;
					}
				}
			}
		}
		if (cnt % 2 == 0) cout << "Vivek" << endl;
		else cout << "Ashish" << endl;
	}
	return 0;
}