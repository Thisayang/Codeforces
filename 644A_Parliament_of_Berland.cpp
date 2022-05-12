#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, x = 1, y = 2;
	cin >> n >> a >> b;
	if (a * b < n) cout << -1 << endl;
	else {
		for (int i = 0; i < a; ++ i) {
			for (int j = 0; j < b; ++ j) {
				if ((j + i) % 2 == 0) {
					if (x <= n) {
						cout << x << " ";
						x += 2;
					} else cout << 0 << " ";
				} else {
					if (y <= n) {
						cout << y << " ";
						y += 2;
					} else cout << 0 << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}