#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = -1;
	vector<int> a(100010);
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if (a[i] == 1) ans = 1;
	}
	if (ans == 1) cout << ans << endl;
	else if (n == 1) cout << a[0] << endl;
	else {
		sort(a.begin(), a.begin() + n);
		for (int i = 1; i < n; ++ i) {
			if (a[i] % a[0] != 0) {
				break;
			}
			if (i == n - 1) ans = a[0];
		}
		cout << ans << endl;
	}
	return 0;
}