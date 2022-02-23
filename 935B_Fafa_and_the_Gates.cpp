#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n) {
		cin >> s;
		int x = 0, y = 0, ans = 0;
		int flg = 0, tmp = 0;
		for(auto &i : s) {
			if(i == 'U') y += 1;
			else x += 1;
			if(x > y) flg = 2;
			else if(x < y) flg = 1;
			if(flg != tmp) ans ++;
			tmp = flg;
		}
		cout << ans - 1 << endl;
	}
	return 0;
}
