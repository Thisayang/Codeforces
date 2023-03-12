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
	FOR(i, 0, s.length()) {
		if (s[i] == '9' && i == 0) continue;
		else {
			s[i] = min(char(9 - (s[i] - '0') + '0'), s[i]);
		}
	}
	cout << s << endl;
	return 0;
}