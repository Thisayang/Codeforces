#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, q, m, tmp;
	vector<int> a(100010);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin() + n);
	cin >> q;
	for (int i = 0; i < q; ++ i) {
		cin >> m;
		int ans = 0, cnt = n / 2, st = 0, end = n - 1;
		while (st <= end) {
			if (m >= a[cnt]) {
				ans = cnt + 1;
				st = cnt + 1;
			} else if (m < a[cnt]) {
				end = cnt - 1;
			}
			cnt = (st + end) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}