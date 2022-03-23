#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct rec {
	int u, d, l, r;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int a[110][110] = {0};
		vector<rec> a(100);
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				if (a[i][j] == 1) {
					int u = i, l = j, d, r;
					for (int k = i + 1; k < n; ++ k) {
						if (a[k][j] != 0) d ++;
					}
					for (int k = j + 1; k < m; ++ k) {
						if (a[i][k] != 0) r ++;
					}
					rec tmp;
					tmp.u = u;
					tmp.d = d;
					tmp.l = l;
					tmp.r = r;
					a.push_back(tmp);
					for (int k = u; k <= d; ++ k) {
						for (int o = l; o <= r; ++ o) {
							a[k][o] = -1;
						}
					}
				}
			}
		}
	}
	return 0;
}