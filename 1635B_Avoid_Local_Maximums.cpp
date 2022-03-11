#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		a.clear();
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n <= 2) {
			cout << 0 << endl;
		} else {
			int cnt = 0;
			for (int i = 1; i < n - 2; ++ i) {
				if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
					cnt ++;
					a[i + 1] = max(a[i], a[i + 2]);
				}
			}
			if (a[n - 2] > a[n - 3] && a[n - 2] > a[n - 1]) {
				cnt ++;
				a[n - 2] = max(a[n - 1], a[n - 3]);
			}
			cout << cnt << endl;
		}
		for (int i = 0; i < n; ++ i) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}