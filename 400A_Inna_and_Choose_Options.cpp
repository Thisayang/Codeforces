#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[15] = {0};
	string s;
	queue<string> q;
	cin >> t;
	while (t --) {
		int cnt = 0;
		cin >> s;
		if (s == "OOOOOOOOOOOO") cout << 0 << endl;
		else {
			int a[6] = {0}, b[4] = {0}, c[3] = {0}, d[2] = {0};
			for (int i = 0; i < 12; ++ i) {
				if (s[i] == 'X') {
					cnt ++;
					a[i % 6] ++;
					b[i % 4] ++;
					c[i % 3] ++;
					d[i % 2] ++;
				}
			}
			int ans = 0;
			if (cnt > 0) {
				ans ++;
				q.push("1x12");
			} 
			if (cnt > 1) {
				for (int i = 0; i < 6; ++ i) {
					if (a[i] == 2) {
						ans ++;
						q.push("2x6");
						break;
					}
				}
			}
			if (cnt > 2) {
				for (int i = 0; i < 4; ++ i) {
					if (b[i] == 3) {
						ans ++;
						q.push("3x4");
						break;
					}
				}
			}
			if (cnt > 3) {
				for (int i = 0; i < 3; ++ i) {
					if (c[i] == 4) {
						ans ++;
						q.push("4x3");
						break;
					}
				}
			}
			if (cnt > 5) {
				for (int i = 0; i < 2; ++ i) {
					if (d[i] == 6) {
						ans ++;
						q.push("6x2");
						break;
					}
				}
			}
			if (cnt == 12) {
				ans ++;
				q.push("12x1");
			}
			cout << ans;
			while (!q.empty()) {
				cout << " " << q.front();
				q.pop();
			}
			cout << endl;
		}
	}
	return 0;
}