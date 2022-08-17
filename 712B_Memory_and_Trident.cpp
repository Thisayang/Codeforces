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
	if (s.length() & 1) cout << -1 << endl;
	else {
		int x = 0, y = 0;
		for (int i = 0; s[i] != 0; ++ i) {
			if (s[i] == 'U') x ++;
			else if (s[i] == 'D') x --;
			else if (s[i] == 'L') y ++;
			else y --;
		}
		int mx = max(abs(0 - x), abs(0- y)), mn = min(abs(0 - x), abs(0 - y));
		cout << (mx + mn) / 2 << endl;
	}
	return 0;
}