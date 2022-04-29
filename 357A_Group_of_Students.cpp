#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int m, c[110], x, y, ans = 0, sum = 0, sum2 = 0;
	cin >> m;
	for (int i = 0; i < m; ++ i) {
		cin >> c[i];
		sum += c[i];
	}
	cin >> x >> y;
	for (int i = 0; i < m - 1; ++ i) {
		sum2 += c[i];
		if (sum2 >= x && sum2 <= y && sum - sum2 >= x && sum - sum2 <= y) {
			ans = i + 2;
		}
	}
	cout << ans << endl;
	return 0;
}