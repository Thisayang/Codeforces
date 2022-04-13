#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[1010][5];
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = 0;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < 5; ++ j) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < 4; ++ i) {
			for (int j = i + 1; j < 5; ++ j) {
				int cnta = 0, cntb = 0;
				for (int k = 0; k < n; ++ k) {
					if (a[k][i] == 0 && a[k][j] == 0) goto re;
					else if (a[k][i] == 1 && a[k][j] == 0) cnta ++;
					else if (a[k][i] == 0 && a[k][j] == 1 ) cntb ++;
					if (cnta > n / 2 || cntb > n / 2) {
						goto re;
					}
				}
				flg = 1;
				re: ;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}