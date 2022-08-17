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
	if (s[0] == '0') cout << 0 << endl;
	else {
		int l = s.length(), zro = 0, ans = 0;
		ROF(i, l - 1, 0) {
			if (s[i] == '0') zro ++;
			else ans ++;
			if (zro == k) break;
		}
		if (zro == k) cout << ans << endl;
		else cout << l - 1 << endl;
	}
	return 0;
}