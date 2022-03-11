#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x1, x2, x3, y1, y2, y3;
	cin >> t;
	while (t --) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		if (y1 == y2 && y3 < y1) {
			cout << abs(x1 - x2) << endl;
		} else if (y1 == y3 && y2 < y3) {
			cout << abs(x1 - x3) << endl;
		} else if (y2 == y3 && y1 < y3) {
			cout << abs(x2 - x3) << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}