#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60], m, b[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int max1 = 0, max2 = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (max1 < a[i]) max1 = a[i];
		}
		cin >> m;
		for (int i = 0; i < m; ++ i) {
			cin >> b[i];
			if (max2 < b[i]) max2 = b[i];
		}
		if (max1 > max2) cout << "Alice\nAlice\n";
		else if (max1 < max2) cout << "Bob\nBob\n";
		else cout << "Alice\nBob\n";
	}
	return 0;
}