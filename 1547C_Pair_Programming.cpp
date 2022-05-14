#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, m, a[110], b[110];
	string s;
	cin >> t;
	while (t --) {
		cin >> k >> n >> m;
		int flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < m; ++ i) {
			cin >> b[i];
		}
		queue<int> q;
		int i = 0, j = 0, cnt = 0;
		while (i < n && j < m) {
			for ( ; i < n; ++ i) {
				if (a[i] == 0) {
					k ++;
				} else {
					if (a[i] > k) {
						cnt ++;
						break;
					}
				}
				q.push(a[i]);
				cnt = 0;
			}
			for ( ; j < m; ++ j) {
				if (b[j] == 0) {
					k ++;
				} else {
					if (b[j] > k) {
						cnt ++;
						break;
					}
				}
				q.push(b[j]);
				cnt = 0;
			}
			if (cnt > 2) {
				flg = 1;
				break;
			}
		}
		if (i < n) {
			for (; i < n; ++ i) {
				if (a[i] == 0) {
					k ++;
				}
				if (a[i] > k) {
					flg = 1;
					break;
				}
				q.push(a[i]);
			}
		}
		if (j < m) {
			for (; j < m; ++ j) {
				if (b[j] == 0) {
					k ++;
				}
				if (b[j] > k) {
					flg = 1;
					break;
				}
				q.push(b[j]);
			}
		}
		if (flg == 1) cout << -1 << endl;
		else {
			while (!q.empty()) {
				cout << q.front() << " ";
				q.pop();
			}
			cout << endl;
		}
	}
	return 0;
}