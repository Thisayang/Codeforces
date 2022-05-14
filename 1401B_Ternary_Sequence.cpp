#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x1, x2, y1, y2, z1, z2;
	cin >> t;
	while (t --) {
		int sum = 0;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		int m = min(x1, z2);
		x1 -= m;
		z2 -= m;
		m = min(y1, x2);
		y1 -= m;
		x2 -= m;
		m = min(z1, y2);
		z1 -= m;
		y2 -= m;
		sum += 2 * m;
		sum -= 2 * min(y1, z2);
		cout << sum << endl;
	}
	return 0;
}