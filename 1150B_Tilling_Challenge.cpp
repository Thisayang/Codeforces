#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s[60];
	while(cin >> n) {
		for(int i = 0; i < n; ++ i) cin >> s[i];
		for(int i = 0; i < n; ++ i) {
			for(int j = 0; j < n; ++ j) {
				if(i - 1 >= 0 && i + 1 < n && j - 1 >= 0 && j + 1 < n && s[i][j] == '.' 
				&& s[i + 1][j] == '.' && s[i - 1][j] == '.' &&s[i][j + 1] == '.' && s[i][j - 1] == '.')
                s[i][j] = s[i + 1][j] = s[i - 1][j] = s[i][j + 1]=s[i][j - 1] = '#';
			}
		}
		bool flg = 0;
		for(int i = 0; i < n; ++ i) {
			for(int j = 0; j < n; ++ j) {
				if(s[i][j] == '.') {
					flg = 1;
					break;
				}
			}
			if(flg) break;
		}
		if(flg) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
