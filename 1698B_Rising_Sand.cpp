#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n >> k;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (k == 1) cout << (n - 1) / 2 << endl;
		else {
			int cnt = 0;
			for (int i = 1; i < n - 1; ++ i) {
				if (a[i] > a[i - 1] + a[i + 1]) cnt ++;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}