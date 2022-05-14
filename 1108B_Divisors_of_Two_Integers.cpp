#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[130];
	cin >> n;
	set<int> sett;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	int mx = *max_element(a, a + n), ans = 0;
	for (int i = 0; i < n; ++ i) {
		if (mx % a[i] == 0 && sett.find(a[i]) == sett.end()) {
			sett.insert(a[i]);
		} else {
			ans = max(a[i], ans);
		}
	}
	cout << mx << " " << ans << endl;
	return 0;
}