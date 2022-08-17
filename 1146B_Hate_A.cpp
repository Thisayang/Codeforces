#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t = "";
	cin >> s;
	int l = s.length(), ok = 0;
	FOR(i, 0, l) {
		if (s[i] != 'a') t += s[i], ok = 1;
	}
	int len = t.length(), flg = 0;
	if (ok == 0) cout << s << endl;
	else if (len & 1) {
		cout << ":(" << endl;
	} else {
		FOR(i, 0, len / 2) {
			if (t[i] != t[i + len / 2]) {
				flg = 1;
				break;
			}
		}
		if (flg == 0) {
			t = t.substr(len / 2);
			len = t.length();
			for (int i = l - 1, j = len - 1; j >= 0; -- i, -- j) {
				if (s[i] != t[j]) {
					flg = 1;
					break;
				}
			}
			s = s.substr(0, l - len);
		}
		cout << (flg == 1 ? ":(" : s) << endl;
	}
	return 0;
}