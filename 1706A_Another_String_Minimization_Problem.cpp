#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[60];
	cin >> t;
	while (t --) {
		cin >> n >> m;
		string s = string(m, 'B');
		set<int> sett;
		FOR(i, 0, n) {
			cin >> a[i];
			int mn = min(a[i] - 1, m - a[i]);
			if (sett.find(mn) == sett.end()) {
				s[mn] = 'A';
				sett.insert(mn);
			} else {
				s[m - 1 - mn] = 'A';
			}
		}
		cout << s << endl;
	}
	return 0;
}