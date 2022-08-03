#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		set<char> sett;
		int k = 0;
		bool ok = true;
		for (k; k < s.length(); ++ k) {
			if (sett.find(s[k]) == sett.end()) {
				sett.insert(s[k]);
			} else break;
		}
		for (int i = k; i < s.length(); ++ i) {
			if (s[i] != s[i - k]) {
				ok = false;
			}
		}
		cout << (ok == true ? "YES" : "NO") << endl;
	}
	return 0;
}