#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, y, to;
	cin >> t;
	while (t --) {
		cin >> n >> y;
		int sum = 1, flg = 1;
		if (y == 1) sum ++;
		for (int i = 1; i < n; ++ i) {
			cin >> to;
			if (flg) {
				if (y == 0 && to == 0) {
					sum = -1;
					flg = 0;
				} else if (to == 1 && y == 1) {
					sum += 5;
				} else if (to == 1 && y == 0) {
					sum += 1;
				}
				y = to;
			}
		}
		cout << sum << endl;
	}
	return 0;
}