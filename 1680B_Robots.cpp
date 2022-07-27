#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	string s[5];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		for (int i = 0; i < n; ++ i) {
			cin >> s[i];
		}
		set<pair<int, int>> sett;
		for (int i = 0; i < n; ++ i) {
			for (int j = 0; j < m; ++ j) {
				if (s[i][j] == 'R') {
					sett.insert(make_pair(i, j));
				}
			}
		}
		int flg = 1;
		for (auto it = sett.begin(); it != sett.end(); ++ it) {
			int ok = 0;
			for (auto itt = sett.begin(); itt != sett.end(); ++ itt) {
				if (it == itt) continue;
				pair<int, int> p = *it, q = *itt;
				if (p.first > q.first || p.second > q.second) ok = 1;
			}
			if (ok == 0) flg = 0; 
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}