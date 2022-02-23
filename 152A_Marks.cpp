#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[110];
	while(cin >> n >> m) {
		bool a[110] = {0};
		int mmax[110] = {0}, ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> s[i];
			for(int j = 0; j < m; ++ j) mmax[j] = mmax[j] > s[i][j] ? mmax[j] : s[i][j];
		}
		for(int i = 0; i < m; ++ i) {
			for(int j = 0; j < n; ++ j) 
				if(s[j][i] == mmax[i]) a[j] = 1;
		}
		for(int i = 0; i < 101; ++ i)
			if(a[i] == 1) ans ++;
		cout << ans << endl;
	}
	return 0;
}
