#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct ball{
	int x, y;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	ball b[110];
	while (t --) {
		cin >> n >> k;
		for (int i = 0; i < n; ++ i) {
			cin >> b[i].x >> b[i].y;
		}
		int flg = 0, res = -1;
		for (int i = 0; i < n; ++ i) {
			flg = 0;
			for (int j = 0; j < n; ++ j) {
				if (abs(b[i].x - b[j].x) + abs(b[i].y - b[j].y) > k) {
					flg = 1;
					break;
				}
			}
			if (!flg) {
				res = 1;
				break;
			}
		}
		loop: ;
		cout << res << endl;
	}
	return 0;
}