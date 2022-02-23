#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			if(n & 1) cout << "YES" << endl;
			else {
				while(n % 2 == 0) n /= 2;
				if(n & 1 && n != 1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}
	return 0;
}
