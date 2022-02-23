#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		long long x, y, a, b;
		long long ans = 0;
		cin >> x >> y >> a >> b;
		int min = x < y ? x : y;
		if(2 * a <= b) ans = (x + y) * a;
		else ans = abs(x - y) * a + min * b;
		cout << ans << endl;
	}
	return 0;
}
