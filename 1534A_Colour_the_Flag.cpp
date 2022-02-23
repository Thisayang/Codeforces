#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
void fun1(int m) {
	for(int j = 0; j < m; ++ j) {
		if(j % 2 == 0) cout << 'R';
		else cout << 'W';
	}
	cout << endl;
}
void fun2(int m) {
	for(int j = 0; j < m; ++ j) {
		if(j % 2 == 0) cout << 'W';
		else cout << 'R';
	}
	cout << endl;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, flg = 0;
    string s[60];
    cin >> t;
    while(t --) {
        cin >> n >> m;
        int x1, y1, x2, y2;
        for(int i = 0; i < n; ++ i) {
			cin >> s[i];
			for(int j = 0; j < m; ++ j) {
				if(s[i][j] == 'R')
					x1 = i, y1 = j;
				if(s[i][j] == 'W') 
					x2 = i, y2 = j;
			}
		}
		if(x1 % 2 == x2 % 2 && y1 % 2 == y2 % 2) cout << "NO" << endl;
		else if(x1 % 2 != x2 % 2 && y1 % 2 != y2 % 2) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			if(x1 % 2 == y1 % 2) flg = 1;
			else flg = 0;
			if(flg == 1) {
				for(int i = 0; i < n; ++ i) {
					if(i % 2 == 0) {
						fun1(m);
					} else {
						fun2(m);
					}
				}
			} else {
				for(int i = 0; i < n; ++ i) {
					if(i % 2 == 0) {
						fun2(m);
					} else {
						fun1(m);
					}
				}
			}
		}
    }
	return 0;
}
