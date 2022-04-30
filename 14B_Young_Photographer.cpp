#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, a, b, q[1010] = {0}, flg = 0, ans = 1001;
	cin >> n >> x;
	for (int i = 0; i < n; ++ i) {
		cin >> a >> b;
		int mn = min(a, b), mx = max(a, b);
		for (int j = mn; j <= mx; ++ j) {
			q[j] ++;
		}
	}
	for (int i = 0; i <= 1000; ++ i) {
		if (q[i] == n) {
			flg = 1;
			ans = min(ans, abs(x - i));
		}
	}
	cout << (flg == 1 ? ans : -1) << endl;
	return 0;
}