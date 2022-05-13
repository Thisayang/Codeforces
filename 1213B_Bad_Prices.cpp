#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(150010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int mn = a[n - 1], ans = 0;
		for (int i = n - 2; i >= 0; -- i) {
			if (a[i] > mn) ans ++;
			else if (a[i] < mn) {
				mn = a[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}