#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	string s;
	cin >> n >> s;
	FOR(i, 0, n) {
		if (s[i] == 'L') {
			ROF(j, i, -1) {
				if (s[j] == 'R') {
					s[j] = 'P';
					if ((i - j) % 2 == 0) ans ++;
					break;
				}
				s[j] = 'P';
			}
		} else if (s[i] == 'R') {
			FOR(j, i, n) {
				if (s[j] == 'P') break;
				if (s[j] == 'L') {
					s[j] = 'P';
					if ((j - i) % 2 == 0) ans ++;
					break;
				}
				s[j] = 'P';
				
			}
		}
	}
	FOR(i, 0, n) {
		if (s[i] == '.') ans ++;
	}
	cout << ans << endl;
	return 0;
}