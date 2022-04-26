#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int ans = 0, a, b, flg = 0;
void sum(int x, int y) {
	if (x + y == 1) {
		flg = 1;
	} else if (x + y == 3) {
		ans += b;
	} else if (x + y == 2 && (x == 0 || y == 0)) {
		ans += a;
	} else if (x + y == 4) {
		ans += 2 * min(a, b);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, c[30];
	cin >> n >> a >> b;
	for (int i = 0; i < n; ++ i) {
		cin >> c[i];
	}
	for (int i = 0; i <= (n - 1) / 2; ++ i) {
		if (n % 2 == 1) {
			if (i == (n - 1) / 2) {
				if (c[i] == 2) ans += min(a, b);	
			} else {
				sum(c[i], c[n - i - 1]);
			}
		} else {
			sum(c[i], c[n - i - 1]);
		}
	}
	cout << (flg == 1 ? -1 : ans) << endl;
	return 0;
}