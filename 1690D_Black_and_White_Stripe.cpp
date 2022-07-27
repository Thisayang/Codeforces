#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> k >> s;
		vector<int> a(n + 1);
		int ans = 1;;
		if (k == 1) {
			for (int i = 0; i < n; ++ i) {
				if (s[i] == 'B') ans = 0;
			}
		} else {
			for (int i = 0; i < n; ++ i) {
				if (i == 0) a[i] = 0;
				else a[i] = a[i - 1];
				if (s[i] == 'W') {
					a[i] ++;
				}
				if (i < k - 1) continue;
				if (i == k - 1) ans = a[i];
				else ans = min(ans, a[i] - a[i - k]);
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}