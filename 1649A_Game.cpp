#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a[110] = {1}, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 1; i < n; ++ i) {
			if (a[i] == 0 && a[i - 1] == 1) cnt ++;
		}
		if (cnt == 0) cout << 0 << endl;
		else if (cnt == 1) {
			int flg = 0;
			for (int i = 0; i < n; ++ i) {
				if (a[i] == 0) {
					for (int j = 1; i + j < n; ++ j) {
						if (a[i + j] == 1) {
							cout << j + 1 << endl;
							flg = 1;
							break;
						}
					}
					if (flg) break;
				}
			}
		} else if (cnt > 1) {
			int flg = 0;
			for (int i = 0; i < n; ++ i) {
				if (a[i] == 0) {
					flg = i;
					break;
				}
			}
			for (int i = n - 1; i > 0; -- i) {
				if (a[i] == 0) {
					cout << i + 2 - flg << endl;
					break;
				}
			}
		}
	}
	return 0;
}