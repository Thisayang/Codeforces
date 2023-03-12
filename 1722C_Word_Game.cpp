#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int sum(int a, int c) {
	if (c == 0) a += 3;
	else if (c == 1) a += 1;
	return a;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n;
		set<string> a, b, c;
		FOR(i, 0, n) {
			cin >> s;
			a.insert(s);
		}
		FOR(i, 0, n) {
			cin >> s;
			b.insert(s);
		}
		FOR(i, 0, n) {
			cin >> s;
			c.insert(s);
		}
		int sa = 0, sb = 0, sc = 0;
		for (auto it = a.begin(); it != a.end(); ++ it) {
			int cnt = 0;
			if (b.find(*it) != b.end()) cnt ++;
			if (c.find(*it) != c.end()) cnt ++;
			sa = sum(sa, cnt);
		}
		for (auto it = b.begin(); it != b.end(); ++ it) {
			int cnt = 0;
			if (a.find(*it) != a.end()) cnt ++;
			if (c.find(*it) != c.end()) cnt ++;
			sb = sum(sb, cnt);
		}
		for (auto it = c.begin(); it != c.end(); ++ it) {
			int cnt = 0;
			if (a.find(*it) != a.end()) cnt ++;
			if (b.find(*it) != b.end()) cnt ++;
			sc = sum(sc, cnt);
		}
		cout << sa << " " << sb << " " << sc << endl;
	}
	return 0;
}