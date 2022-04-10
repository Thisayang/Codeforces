#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp;
	cin >> t;
	map<int, int> m;
	while (t --) {
		cin >> n;
		m.clear();
		for (int i = 0; i < n; ++ i) {
			cin >> tmp;
			m[tmp] ++;
		}
		int mx = 0;
		for (auto it = m.begin(); it != m.end(); ++ it) {
			mx = max(it->second, mx);
		}
		if (mx == n) cout << 0 << endl;
		else {
			int cnt = 0;
			while(mx < n) {
				if (mx * 2 < n) {
					cnt += mx + 1;
				} else {
					cnt += 1 + (n - mx);
				}
				mx *= 2;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}