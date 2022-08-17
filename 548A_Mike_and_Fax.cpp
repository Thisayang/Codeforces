#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int k;
	cin >> s >> k;
	if (s.length() % k != 0) cout << "NO" << endl;
	else {
		int a = 0, flg = 0;
		FOR(i, 0, k) {
			if (i != 0) a += s.length() / k;
			string t = s.substr(a, s.length() / k);
			string x = t;
			reverse(t.begin(), t.end());
			if (t != x) flg = 1;
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}