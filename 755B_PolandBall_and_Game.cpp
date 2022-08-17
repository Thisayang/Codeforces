#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, cnt = 0;
	cin >> n >> m;
	string s, t;
	set<string> stt;
	FOR(i, 0, n) {
		cin >> s;
		stt.insert(s);
	}
	FOR(i, 0, m) {
		cin >> t;
		if (stt.find(t) != stt.end()) cnt ++;
	}
	n -= cnt / 2;
	m -= (cnt + 1) / 2;
	if (n <= m) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}