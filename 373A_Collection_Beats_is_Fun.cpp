#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k;
	string s[4];
	while(cin >> k) {
		bool flg = 0;
		int a[10] = {0};
		for(int i = 0; i < 4; ++ i) cin >> s[i];
		for(int i = 0; i < 4; ++ i) {
			for(int j = 0; j < 4; ++ j) {
				if(s[i][j] > '0' && s[i][j] <= '9') {
					a[s[i][j] - '0'] ++;
					if(a[s[i][j] - '0'] > 2 * k) {
						flg = 1;
						break;
					}
				}
			}
			if(flg) break;
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}
