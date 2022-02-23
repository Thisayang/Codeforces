#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s[60];
	cin >> n >> m;
	int u = 0, d = n, l = 0, r = m;
	bool flg1 = 0, flg2 = 0;
	for(int i = 0; i < n; ++ i) {
		cin >> s[i];
		for(int j = 0; j < m; ++ j) {
			if(s[i][j] == '*' && !flg1) {
				u = i, flg1 = 1;
				break;
			}
		}
	}
	for(int i = n - 1; i >= 0; -- i) {
		for(int j = m - 1; j >= 0; -- j) {
			if(s[i][j] == '*' && !flg2) {
				d = i, flg2 = 1;
				break;
			}
		}
		if(flg2) break;
	}
	for(int i = 0; i < m; ++ i) {
		for(int j = 0; j < n; ++ j) {
			if(s[j][i] == '*' && flg1) {
				l = i, flg1 = 0;
				break;
			}
		}
		if(!flg1) break;
	}
	for(int i = m - 1; i >= 0; -- i) {
		for(int j = n - 1; j >= 0; -- j) {
			if(s[j][i] == '*' && flg2) {
				r = i, flg2 = 0;
				break;
			}
		}
		if(!flg2) break;
	}
	for(int i = u; i <= d; ++ i) {
		for(int j = l; j <= r; ++ j)
			cout << s[i][j];
		cout << endl;
	}
	return 0;
}
