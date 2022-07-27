#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			if (i % 4 == 3 || i % 4 == 0) {
				for (int j = 0; j < m; ++ j) {
					if (j % 4 == 0 || j % 4 == 3) cout << 1 << " ";
					else cout << 0 << " ";
				}
			} else {
				for (int j = 0; j < m; ++ j) {
					if (j % 4 == 1 || j % 4 == 2) cout << 1 << " ";
					else cout << 0 << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}