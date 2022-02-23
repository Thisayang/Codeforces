#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[40][40];
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++ j)
			cin >> a[i][j];
	}
	int ans = 0;
	for(int i = 0; i < n; ++ i) {
		for(int j = 0; j < n; ++ j) {
			int col = 0, row = 0;
			for(int c = 0; c < n; ++ c) col += a[c][j];
			for(int r = 0; r < n; ++ r) row += a[i][r];
			if(col > row) ans ++;
		}
	}
	cout << ans;
	return 0;
}
