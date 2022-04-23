#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, d;
	vector<int> a(110);
	cin >> t;
	while (t --) {
		cin >> n >> k >> d;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int ans = 1000;
		for (int st = 0, end = d - 1; end < n; ++ end, ++ st) {
			int cnt = 0;
			set<int> sett;
			for (int i = st; i <= end; ++ i) {
				sett.insert(a[i]);
			}
			ans = min(ans, int(sett.size()));
		}
		cout << ans << endl;
	}
	return 0;
}