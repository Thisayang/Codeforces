#include <bits\stdc++.h>
using namespace std;
int main() {
	int r, c, ok[11] = {0}, flg[11] = {0}, ans = 0;
	char a[11][11];
	cin >> r >> c;
	for(int i = 0; i < r; i ++) {
		for(int j = 0; j < c; j ++) {
			cin >> a[i][j];
			if(a[i][j] == 'S') {
				ok[i] = 1;
				flg[j] = 1;
			}
		}
	}
	for(int i = 0; i < r; i ++) {
		if(ok[i] == 0)
			for(int j = 0; j < c; j ++)
				a[i][j] = '*';
	}
	for(int j = 0; j < c; j ++) {
		if(flg[j] == 0)
			for(int i = 0; i < r; i ++) 
				a[i][j] = '*';
	}
	for(int j = 0; j < c; j ++) {
		for(int i = 0; i < r; i ++) 
			if(a[i][j] == '*') ans ++;
	}
	cout << ans << endl;
	return 0;
}
