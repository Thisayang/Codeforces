#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110][110];
	while(cin >> n) {
		bool flg[110] = {0};
		for(int i = 1; i <= n; ++ i) {
			for(int j = 1; j <= n; ++ j) {
				cin >> a[i][j];
				if(a[i][j] == 1) flg[i] = 1;
				else if(a[i][j] == 2) flg[j] = 1;
				else if(a[i][j] == 3) flg[i] = 1, flg[j] = 1;
			}
		}
		int ans = 0;
		for(int i = 1; i <= n; ++ i) if(!flg[i]) ans ++;
		cout << ans << endl;
		for(int i = 1; i <= n; ++ i) 
			if(!flg[i]) cout << i << ' ';
		if(ans != 0) cout << endl;
	}
	return 0;
}
