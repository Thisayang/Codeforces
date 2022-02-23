#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int x, y, ans;
		cin >> x >> y;
		if(x == y) ans = 2 * x;
		else ans = min(x, y) * 2 + abs(x - y) * 2 - 1;
		cout << ans << endl;
	}
	return 0;
}
