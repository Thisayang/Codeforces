#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t = "";
	int ans = 0, flg = 0;
	cin >> s;
	FOR(i, 0, s.length() - 1) {
		if (s[i] == 'V' && s[i + 1] == 'K') {
			ans ++;
			s[i] = '0';
			s[i + 1] = '0';
			i ++;
		} 
	}
	FOR(i, 0, s.length() - 1) {
		if (s[i] == s[i + 1] && s[i] != '0') {
			flg = 1;
		} 
	}
	cout << ans + flg << endl;
	return 0;
}