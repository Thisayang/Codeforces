#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[110], x[2] = {0};
	cin >> n >> k;
	for (int i = 1; i <= n; ++ i) {
		cin >> a[i];
		if (a[i] == -1) x[0] ++;
		else x[1] ++;
	}
	int mx = 0;
	for (int i = 0; i < k; ++ i) {
		int cnt1 = 0, cnt2 = 0;
		for (int j = 1; j <= n; ++ j) {
			if (j % k == i) {
				if (a[j] == -1) cnt1 ++;
				else cnt2 ++;
			}
		}
		mx = max(mx, abs(x[0] - cnt1 - x[1] + cnt2));
	}
	cout << mx << endl;
	return 0;
}