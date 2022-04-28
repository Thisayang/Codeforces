#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110];
	cin >> n;
	for (int i = 1; i <= n; ++ i) {
		cin >> a[i];
	}
	int mn = 1000000001;
	for (int i = 1; i <= n; ++ i) {
		int ans = 0;
		for (int j = 1; j <= n; ++ j) {
			ans += a[j] * 2 *(abs(i - j) + abs(j - 1) + abs(1 - i));
		}
		mn = min(ans, mn);
	}
	cout << mn << endl;
	return 0;
}