#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp, ans = 0;
	cin >> n;
	set<pair<int, int>> sett;
	FOR(i, 0, n) {
		cin >> tmp;
		if (tmp == i) ans ++;
		else {
			sett.insert(make_pair(tmp, i));
		}
	}
	int flg = 0;
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		pair<int, int> p = *it;
		if (sett.find(make_pair(p.second, p.first)) != sett.end()) {
			ans += 2;
			flg = 1;
			break;
		}
	}
	if (flg == 0 && sett.size() != 0) ans ++;
	cout << ans << endl;
	return 0;
}