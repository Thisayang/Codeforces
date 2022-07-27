#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<string> s(n);
		set<string> sett;
		FOR(i, 0, n) {
			cin >> s[i];
			sett.insert(s[i]);
		}
		FOR(i, 0,  n) {
			int l = s[i].size();
			string tep = s[i];
			bool flg = 0;
			FOR(j, 0, l) {
				if (sett.find(tep.substr(0, j)) != sett.end() && sett.find(tep.substr(j, l)) != sett.end()) {
					flg = 1;
					break;
				}
			}
			cout << flg;
		}
		cout << endl;
	}
	return 0;
}