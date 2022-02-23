#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, d, e, f, ans = 0;
	cin >> a >> b >> c >> d >> e >> f;
	if(e > f) {
		ans += e * min(a, d);
		d -= min(a, d);
		ans += f * min(min(b, c), d);
	}
	else {
		ans += f * min(min(b, c), d);
		d -= min(min(b, c), d);
		ans += e * min(a, d);
	}
	cout << ans;
	return 0;
}
