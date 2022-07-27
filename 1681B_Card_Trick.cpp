#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, tmp;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) cin >> a[i];
		cin >> m;
		int sum = 0;
		for (int i = 0; i < m; ++ i) {
			cin >> tmp;
			sum += tmp;
			sum %= n;
		}
		cout << a[sum % n] << endl;
	}
	return 0;
}