#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, b, ans = 0;
		char s[101][101];
		cin >> a >> b;
		for(int i = 0; i < a; i ++) {
			for(int j = 0; j < b; j ++) {
				cin >> s[i][j];
				if(i == a - 1 && s[i][j] == 'D') ans ++;
				if(j == b - 1 && s[i][j] == 'R') ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
