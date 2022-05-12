#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r, g, b;
	cin >> r >> g >> b;
	int ans = (r + 1) / 2 * 3 - 3;
	ans = max(ans, (g + 1) / 2 * 3 - 2);
	ans = max(ans, (b + 1) / 2 * 3 - 1);
	cout << ans + 30 << endl;
	return 0;
}