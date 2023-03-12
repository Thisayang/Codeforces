#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x, y;
	cin >> t;
	while (t --) {
		cin >> n >> x >> y;
		if (n == 2) cout << x << " " << y << endl;
		else if ((y - x) % (n - 1) == 0) {
			int tmp = (y - x) / (n - 1);
			FOR(i, 0, n) {
				cout << x << " ";
				x += tmp;
			}
			cout << endl;
		} else {
			int tmp = y - x, cnt = 0, tp = x;
			ROF(i, n - 1, 0) {
				if (tmp % i == 0) {
					tmp = tmp / i; 
					FOR(j, 0, i + 1) {
						cout << tp << " ";
						tp += tmp;
					}
					cnt = i + 1;
					break;
				}
			}
			if (cnt < n) {
				FOR(i, cnt, n) {
					if (x - tmp > 0) cout << x - tmp << " ";
					else break;
					x -= tmp;
					cnt ++;
				}
				FOR(i, cnt, n) {
					cout << y + tmp << " ";
					y += tmp;
					cnt ++;
				}
				cout << endl;
			}
		}
	}
	return 0;
}