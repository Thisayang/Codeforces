#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a, mx = 0, mn;
	cin >> n >> m;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < m; ++ j) {
			cin >> a;
			if (j == 0) mn = a;
			else mn = min(mn, a);
		}
		mx = max(mn, mx);
	}
	cout << mx << endl;
	return 0;
}