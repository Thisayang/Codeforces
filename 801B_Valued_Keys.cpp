#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string x, y;
	while(cin >> x >> y) {
		bool flg = 0;
		int len = x.length();
		for(int i = 0; i < len; ++ i) {
			if(y[i] > x[i]) {
				flg = 1;
				break;
			}
			else if(y[i] < x[i]) x[i] = y[i];
		}
		if(flg) cout << -1 << endl;
		else cout << x << endl;
	}
	return 0;
}
