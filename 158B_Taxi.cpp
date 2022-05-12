#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, x[5] = {0};
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		x[a] ++;
	}
	int ans = x[4];
	ans += x[3];
	x[1] -= min(x[1], x[3]);
	ans += (x[2] + 1) / 2;
	x[1] -= min(x[1], x[2] % 2 * 2);
	ans += (x[1] + 3) / 4;
	cout << ans << endl;
	return 0;
}