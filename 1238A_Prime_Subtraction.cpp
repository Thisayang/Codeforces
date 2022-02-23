#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL t, x, y;
	while(cin >> t) {
		while(t --) {
			cin >> x >> y;
			if(x - y != 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
