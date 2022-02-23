#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, s;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			s = 9;
			if(n == 1) cout << 9;
			else {
				cout << 98;
				n -= 2;
				while(n --) {
					cout << s;
					s ++;
					if(s == 10) s = 0;
				}
			}
			cout << endl;
		}
	}
	return 0;
}
