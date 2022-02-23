#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			int n3 = 0, n5 = 0, n7 = 0;
			if(n == 4 || n == 2 || n == 1) cout << -1 << endl;
			else {
				while(n) {
					if(n > 11 || n == 7) n -= 7, n7 ++;
					else if(n % 3 != 0) n -= 5, n5 ++;
					else n -= 3, n3 ++;
				}
				cout << n3 << ' ' << n5 << ' ' << n7 << endl;
			}
		}
	}
	return 0;
}
