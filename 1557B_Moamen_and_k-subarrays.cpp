#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	vector<int> a(100010);
	map<int, int> mp;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		int cnt = 1;
		a[0] = 1e9 + 10;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
			mp[a[i]] = a[i - 1];
		}
		sort(a.begin() + 1, a.begin() + n + 1);
		for (int i = 2; i <= n; ++ i) {
			if (mp[a[i]] != a[i - 1]) {
				cnt ++;
			}
		}
		if (k >= cnt) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}