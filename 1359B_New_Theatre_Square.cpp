#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, x, y;
	string s;
	while(cin >> t) {
		while(t --) {
			int ans = 0;
			cin >> n >> m >> x >> y;
			for(int i = 0; i < n; ++ i) {
				cin >> s;
				for(int j = 0; j < m; ++ j) {
					if(s[j] == '.' && s[j + 1] == '.') {
						if(y < 2 * x) ans += y;
						else ans += 2 * x;
						++ j;
					} else if(s[j] == '.') ans += x;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}
