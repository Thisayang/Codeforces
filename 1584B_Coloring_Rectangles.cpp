#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t --) {
		cin >> n >> m;
		int mn = min(n, m), mx = max(n, m);
		int sum1 = mn / 3 * mx + ((mx / 3) * (mn % 3));
		if (mn % 3 != 0 && mx % 3 != 0) sum1 += mn % 3;
		int sum2 = mx / 3 * mn + ((mn / 3) * (mx % 3));
		if (mn % 3 != 0 && mx % 3 != 0) sum2 += mx % 3;
		cout << (sum1 < sum2 ? sum1 : sum2) << endl;
	}
	return 0;
}