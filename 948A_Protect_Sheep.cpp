#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r, c;
	string p[510];
	while(cin >> r >> c) {
		int x[4] = {1, 0, -1, 0};
		int y[4] = {0, 1, 0, -1};
		bool flg = 0;
		for(int i = 0; i < r; ++ i) cin >> p[i];
		for(int i = 0; i < r; ++ i) {
			for(int j = 0; j < c; ++ j) {
				if(p[i][j] == 'S') {
					for(int k = 0; k < 4; ++ k) {
						if(i + x[k] >= 0 && j + y[k] >= 0 &&
							i + x[k] <= r - 1 && j + y[k] <= c - 1 && p[i + x[k]][j + y[k]] == '.')
							p[i + x[k]][j + y[k]] = 'D';
							if(i + x[k] >= 0 && j + y[k] >= 0 &&
							i + x[k] <= r - 1 && j + y[k] <= c - 1 && p[i + x[k]][j + y[k]] == 'W')
							flg = 1;
					}
				}
			}
		}
		if(flg) cout << "No" << endl;
		else {
			cout << "Yes" << endl;
			for(int i = 0; i < r; ++ i) cout << p[i] << endl;
		}
	}
	return 0;
}
