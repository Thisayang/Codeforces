#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s, t[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE",
	"GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9') {
			int cnt = 0;
			for (int j = 0; s[j] != 0; ++ j) {
				cnt = cnt * 10 + (s[j] - '0');
			}
			if (cnt < 18) ans ++;
		} else {
			for (int j = 0; j < 11; ++ j) {
				if (s == t[j]) {
					ans ++;
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}