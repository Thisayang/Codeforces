#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	cin >> n >> s;
	for (int i = 2; i <= n; ++ i) {
		for (int j = 0, k, cnt; j + i <= n; ++ j) {
			int x = 0, y = 0;
			for (k = j, cnt = 0; cnt < i; ++ cnt) {
				if (s[k + cnt] == 'U') y ++;
				else if (s[k + cnt] == 'D') y --;
				else if (s[k + cnt] == 'L') x --;
				else x ++;
			}
			if (x == 0 && y == 0) {
				ans ++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}