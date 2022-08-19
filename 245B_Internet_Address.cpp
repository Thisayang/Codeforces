#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int flg = 0;
	if (s[0] == 'h') {
		cout << "http://";
		for (int i = 4; s[i] != 0; ++ i) {
			if (flg == 1) cout << s[i];
			else {
				if (flg == -1 && s[i] == 'r' && s[i + 1] == 'u') {
					cout << ".ru";
					if (i + 1 != s.length() - 1) cout << "/";
					flg = 1;
					++ i;
				} else {
					flg = -1;
					cout << s[i];
				}
			}
		}
	} else {
		cout << "ftp://";
		for (int i = 3; s[i] != 0; ++ i) {
			if (flg == 1) cout << s[i];
			else {
				if (flg == -1 && s[i] == 'r' && s[i + 1] == 'u') {
					cout << ".ru";
					if (i + 1 != s.length() - 1) cout << "/";
					flg = 1;
					++ i;
				} else {
					flg = -1;
					cout << s[i];
				}
			}
		}
	}
	cout << endl;
	return 0;
}