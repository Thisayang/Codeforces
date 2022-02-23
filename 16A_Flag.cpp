#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[110];
	bool flg = true;
	cin >> n >> m;
	for(int i = 0; i < n; ++ i) cin >> s[i];
	for(int i = 0; i < n; ++ i) {
		for(int j = 1; j < m; ++ j){
			if(s[i][0] != s[i][j] || s[i][0] == s[i + 1][0]) {
				flg = false;
				break;
			}
		} 
		if(!flg) break;
	}
	if(flg) cout << "YES";
	else cout << "NO";
	return 0;
}
