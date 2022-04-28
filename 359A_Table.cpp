#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a, flg = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < m; ++ j) {
			cin >> a;
			if (a == 1 && (i == 0 || j == 0 || i == n - 1 || j == m - 1)) {
				flg = 1;
			}
		}
	}
	cout << (flg == 1 ? 2 : 4) << endl;
	return 0;
}