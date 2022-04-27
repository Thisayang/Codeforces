#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, h, a, b, k;
	int v, y, x, z;
	cin >> n >> h >> a >> b >> k;
	for (int i = 0; i < k; ++ i) {
		cin >> v >> y >> x >> z;
		int ans = abs(v - x);
		if ((y >= a && z <= b) || (y <= b && z >= a)) ans += abs(y - z);
		else ans += min(abs(y - a) + abs(z - a), abs(y - b) + abs(z - b));
		if (v == x) ans = abs(y - z);
		cout << ans << endl;
	}
	return 0;
}