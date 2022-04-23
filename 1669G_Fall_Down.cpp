#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	string s[55];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < n; ++ i) {
			cin >> s[i];
		}
		for (int i = 0; i < m; ++ i) {
			int sum = 0;
			for (int j = 0; j < n; ++ j) {
				if (s[j][i] == '*' && j != n - 1) {
					sum ++;
					s[j][i] = '.';
				} else if (s[j][i] == 'o') {
					for (int k = j - 1; sum > 0; -- sum, -- k) {
						s[k][i] = '*';
					}
					sum = 0;
				} else if (j == n - 1) {
					if (s[j][i] != '*' && sum > 0) {
						s[j][i] = '*';
						-- sum;
					} 
					for (int k = j - 1; sum > 0; --sum, -- k) {
						s[k][i] = '*';
					}
				}
			}
		}
		for (int i = 0; i < n; ++ i) cout << s[i] << endl;
	}
	return 0;
}