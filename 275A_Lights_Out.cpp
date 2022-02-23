#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	bool a[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	int x[5] = {-1, 0, 0, 0, 1}, y[5] = {0, -1, 0, 1, 0}; 
	for(int i = 0; i < 3; ++ i) {
		for(int j = 0, s; j < 3; ++ j) {
			cin >> s;
			if(s & 1) {
				for(int k = 0; k < 5; k ++) {
					int nx = i + x[k], ny = j + y[k];
						if(nx > -1 && nx < 3 && ny > -1 && ny < 3)
							a[nx][ny] = !a[nx][ny];
				}
			}
		}
	}
	for(int i = 0; i < 3; ++ i) {
		for(int j = 0; j < 3; ++ j) cout << a[i][j];
		cout << endl;
	}
	return 0;
}
