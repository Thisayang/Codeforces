#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	string s, x;
	cin >> t;
	while (t --) {
		cin >> n >> m >> s >> x;
		int ok = 0, tmp = n - m + 1;
		if (s.substr(tmp) == x.substr(1) && count(s.begin(), s.begin() + tmp, x[0])) ok = 1;
		cout << (ok == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}