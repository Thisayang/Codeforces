#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		string ans = "";
		if (s[0] == s[1] || n == 1) {
			ans += s[0];
			ans += s[0];
		} else {
			ans += s[0];
			for (int i = 0; s[i + 1] != 0; ++ i) {
				if (s[i] >= s[i + 1]) ans += s[i + 1];
				else break;
			}
			string t(ans.rbegin(), ans.rend());
			ans += t;
			
		}
		cout << ans << endl;
	}
	return 0;
}