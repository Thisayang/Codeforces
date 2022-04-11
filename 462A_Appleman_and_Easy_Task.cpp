#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int x[4] = {1, -1, 0, 0}, y[4] = {0, 0, 1, -1};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0;
	string s[110];
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> s[i];
	}
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < n; ++ j) {
			int cnt = 0;
			for (int k = 0; k < 4; ++ k) {
				if (i + x[k]>= 0 && i + x[k] < n && j + y[k] >= 0 && j + y[k] < n) {
					if (s[i + x[k]][j + y[k]] == 'o') {
						cnt ++;
					}
				}
			}
			if (cnt % 2 == 1) {
				flg = 1;
				goto loop;
			}
		}
	}
	loop: ;
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}