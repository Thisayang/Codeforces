#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, ans = 0;
	string s;
	cin >> n >> k;
	FOR(i, 0, n) {
		cin >> s;
		set<int> sett;
		int l = s.length(), cnt = 0;
		FOR(j, 0, l) {
			sett.insert(s[j] - '0');
		}
		for(auto it = sett.begin(); it != sett.end(); ++ it) {
			if (*it <= k) cnt ++;
		}
		if (cnt == k + 1) ans ++;
	}
	cout << ans << endl;
	return 0;
}