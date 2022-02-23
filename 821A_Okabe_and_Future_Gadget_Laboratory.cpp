#include <bits\stdc++.h>
#define LL long long
using namespace std;
int ok(int a[][60], int n, int x, int y) {
	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++ j) {
			if(a[x][i] + a[j][y] == a[x][y])
				return 1;
		}
	}
	return 0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[60][60];
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++ j)
			cin >> a[i][j];
	}
	bool flg = true;
	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++ j) {
			if(a[i][j] != 1) {
				if(!ok(a, n, i, j)) {
					flg = !flg;
					break;
				}
			}
		}
		if(!flg) break;
	}
	if(flg) cout << "YES";
	else cout << "NO";
	return 0;
}
