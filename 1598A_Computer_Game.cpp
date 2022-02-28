#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		string s[2];
		cin >> s[0] >> s[1];
		int y = 0, flg = 1;
		for (int i = 0; i < n; ++ i) {
			if (s[y][i] != '0') {
				flg = 0;
				break;
			} else {
				if (y == 0) {
					if (s[1][i + 1] == '0') {
						y = 1;
					}
				} else {
					if (s[0][i + 1] == '0') {
						y = 0;
					}
				}
			}
		}
		cout << (flg ? "YES" : "NO") << endl;
	}
	return 0;
}