#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	if (a == b && x == a) cout << 0 << endl;
	else {
		vector< pair<int, int>> v;
		FOR(i, max(b + 1, a), x + 1) {
			FOR(j, b, min(i, y + 1)) {
				v.push_back(make_pair(i, j));
			}
		}
		cout << v.size() << endl;
		FOR(i, 0, v.size()) {
			cout << v[i].first << " " << v[i].second << endl;
		}
	}
	return 0;
}