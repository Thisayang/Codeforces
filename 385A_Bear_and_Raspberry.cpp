#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, c;
	vector<int> a(110);
	cin >> n >> c;
	int ans = 0;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; ++ i) {
		if (a[i] > a[i + 1]) {
			ans = max(ans, a[i] - a[i + 1] - c);
		}
	}
	cout << ans << endl;
	return 0;
}