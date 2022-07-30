#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, y;
	string s;
	cin >> n >> x >> y >> s;
	int ans = 0;
	reverse(s.begin(), s.end());
	FOR(i, 0, x) {
		if (i == y && s[i] == '0') ans ++;
		if (i != y && s[i] == '1') ans ++;
	}
	cout << ans << endl;
	return 0;
}