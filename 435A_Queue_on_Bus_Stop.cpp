#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a, tmp = 0, ans = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		if (a + tmp > m) {
			ans ++;
			tmp = a;
		} else {
			tmp += a;
		}
	}
	if (tmp > 0) ans ++;
	cout << ans << endl;
	return 0;
}