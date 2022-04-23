#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp;
	cin >> t;
	while (t --) {
		cin >> n;
		map<int, int> m;
		for (int i = 0; i < n; ++ i) {
			cin >> tmp;
			m[tmp] ++;
		}
		if (n < 3) cout << "-1" << endl;
		else {
			int ans = -1;
			for (auto it = m.begin(); it != m.end(); ++ it) {
				if (it -> second >= 3) {
					ans = it -> first;
					break;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}