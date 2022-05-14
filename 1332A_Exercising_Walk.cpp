#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c, d, x, y, x1, y1, x2, y2;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c >> d;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		int flg = 0;
		if (a > b) {
			if (x - (a - b) < x1 || x == x1) flg = 1;
		} else if (a < b) {
			if (x + (b - a) > x2 || x == x2) flg = 1;
		}
		if (c > d) {
			if (y - (c - d) < y1 || y == y1) flg = 1;
		} else if (c < d) {
			if (y + (d - c) > y2 || y == y2) flg = 1;
		}
		if ((x == x1 && x == x2 && a + b > 0) || (y == y1 && y == y2 && c + d > 0)) {
			flg = 1;
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}