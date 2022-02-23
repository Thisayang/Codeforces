#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		bool flg = true;
		while(n) {
			if(n % 1000 == 144) n /= 1000;
			else if(n % 100 == 14) n /= 100;
			else if(n % 10 == 1) n /= 10;
			else {
				flg = false;
				break;
			}
		}
		if(flg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
