#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, z;
	vector<int> a(2010);
	cin >> t;
	while (t --) {
		cin >> n >> z;
		int ans = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if ((a[i] | z) > ans) ans = a[i] | z;
		}
		cout << ans << endl;
	}
	return 0;
}