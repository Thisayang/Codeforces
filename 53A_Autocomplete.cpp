#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, t;
	set<string> sett;
	cin >> s >> n;
	FOR(i, 0, n) {
		cin >> t;
		if (t.length() < s.length()) continue;
		if (s == t.substr(0, s.length())) sett.insert(t);
	}
	if (sett.size() == 0) cout << s << endl;
	else cout << *sett.begin() << endl;
	return 0;
}