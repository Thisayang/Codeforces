#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, r, c;
	string s[60];
	cin >> t;
	while (t --) {
		cin >> n >> m >> r >> c;
		int flg = -1;
		for (int i = 0; i < n; ++ i) {
			cin >> s[i];
			if (flg == -1) {
				for (int j = 0; j < m; ++ j) {
					if (s[i][j] == 'B') {
						flg = 2;
						break;
					}
				}
			}
		}
		for (int i = 0; i < m; ++ i) {
			if (s[r - 1][i] == 'B') flg = 1; 
		}
		for (int i = 0; i < n; ++ i) {
			if (s[i][c - 1] == 'B') flg = 1; 
		}
		if (s[r - 1][c - 1] == 'B') cout << 0 << endl;
		else cout << flg << endl;
	}
	return 0;
}