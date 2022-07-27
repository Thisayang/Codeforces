#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n + 1), b(n + 1);
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
			b[i] = i;
		}
		if (n == 1) cout << -1 << endl;
		else {
			for (int i = 1; i < n; ++ i) {
				if (a[i] == b[i]) swap(b[i], b[i + 1]);
			}
			if (a[n] == b[n]) swap(b[n - 1], b[n]);
			for (int i = 1; i <= n; ++ i) cout << b[i] << " ";
			cout << endl;
		}
	}
	return 0;
}