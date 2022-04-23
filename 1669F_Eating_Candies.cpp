#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010), suma(200010), sumb(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
		}
		suma[0] = 0, sumb[0] = 0;
		for (int i = 1; i <= n; ++ i) {
			suma[i] = suma[i - 1] + a[i];
			sumb[i] = sumb[i - 1] + a[n - i + 1];
		}
		int maxa = 0, maxb = 0;
		for (int i = 1, j = 1; i < n; ++ i) {
			for (; j < n; ) {
				if (suma[i] > sumb[j]) {
					++ j;
					continue;
				} else if (suma[i] == sumb[j] && i + j <= n) {
					maxa = i, maxb = j;
					++ j;
				}
				break;
			}
		}
		cout << maxa + maxb << endl;
	}
	return 0;
}