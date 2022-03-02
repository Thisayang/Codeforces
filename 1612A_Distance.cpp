#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x, y;
	cin >> t;
	while (t --) {
		cin >> x >> y;
		int sum = x + y, flg = 1;
		if (sum % 2 == 1) {
			cout << "-1 -1" << endl;
		} else {
			sum = sum / 2;
			for (int i = sum; i >= 0; -- i) {
				if (abs(i - x) + abs(sum - i - y) == sum) {
					cout << i << " " << sum - i << endl;
					flg = 0;
					break;
				}
			}
			if (flg) cout << "-1 -1" << endl;
		}
	}
	return 0;
}