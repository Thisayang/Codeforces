#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int flg = 0;
	char ok = 'a';
	set<char> sett;
	cin >> s;
	FOR(i, 0, s.length()) {
		if (sett.find(s[i]) == sett.end()) {
			if (s[i] == ok) {
				sett.insert(s[i]);
				ok ++;
			} else {
				flg = 1;
				break;
			}
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}