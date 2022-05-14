#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[1010];
	cin >> t;
	while (t --) {
		cin >> n;
		int x = 0, y = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] == 0) x ++;
			else y ++;
		}
		if (x >= y) {
			cout << x << endl;
			for (int i = 0; i < x; ++ i) {
				cout << 0 << " ";
			}
			cout << endl;
		} else {
			if (y % 2 != 0) {
				y --;
			}
			cout << y << endl;
			for (int i = 0; i < y; ++ i) {
				cout << 1 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}