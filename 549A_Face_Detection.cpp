#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[60];
	while(cin >> n >> m) {
		int ans = 0;
		for(int i = 0; i < n; ++ i) cin >> s[i];
		for(int i = 0; i < n; ++ i) {
			for(int j = 0; j < m; ++ j) {
				if(s[i][j] != 'x') {
					if(i + 1 < n && j + 1 < m) {
						string p = "";
						p += s[i][j];
						p += s[i + 1][j];
						p += s[i][j + 1];
						p += s[i + 1][j + 1];
						sort(p.begin(), p.end());
						if(p == "acef") ans ++;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
