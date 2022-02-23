#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int x, y, n;
		cin >> x >> y >> n;
		int ans = n;
		if(n % x > y) ans -= n % x - y;
		else if(n % x < y) ans += (y - n % x) - x;
		cout << ans << endl;
	}
	return 0;
}