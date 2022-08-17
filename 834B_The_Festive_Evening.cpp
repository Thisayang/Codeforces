#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[26] = {0}, flg = 1;
	string s;
	set<char> sett;
	cin >> n >> k >> s;
	FOR(i, 0, n) {
		a[s[i] - 'A'] = i;
	}
	FOR(i, 0, n) {
		if (sett.find(s[i]) == sett.end()) {
			sett.insert(s[i]);
		}
		if (sett.size() > k) {
			flg = 0;
			break;
		}
		if (a[s[i] - 'A'] == i) {
			sett.erase(s[i]);
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}