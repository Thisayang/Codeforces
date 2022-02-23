#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL a, b, x, y, z, ans = 0;
	cin >> a >> b >> x >> y >> z;
	if(2 * x + y > a) ans += 2 * x + y - a;
	if(y + 3 * z > b) ans += y + 3 * z - b;
	cout << ans;
	return 0;
}
