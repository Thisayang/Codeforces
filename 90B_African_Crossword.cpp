#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char>(m));
	FOR(i, 0, n) {
		FOR(j, 0, m) cin >> v[i][j];
	}
	map<char, int> mp;
	vector<vector<char>> s(n), t(m);
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			mp[v[i][j]] ++;
		}
		for(auto it = mp.begin(); it != mp.end(); ++ it) {
			if (it->second > 1) s[i].push_back(it->first);
		}
		mp.clear();
	}
	FOR(i, 0, m) {
		FOR(j, 0, n) {
			mp[v[j][i]] ++;
		}
		for(auto it = mp.begin(); it != mp.end(); ++ it) {
			if (it->second > 1) t[i].push_back(it->first);
		}
		mp.clear();
	}
	FOR(i, 0, n) {
		FOR(j, 0, m) {
			int flg = 0;
			FOR(k, 0, s[i].size()) {
				if (v[i][j] == s[i][k]) {
					flg ++;
					break;
				}
			}
			FOR(k, 0, t[j].size()) {
				if (v[i][j] == t[j][k]) {
					flg ++;
					break;
				}
			}
			if (flg == 0) cout << v[i][j];
		}
	}
	cout << endl;
	return 0;
}