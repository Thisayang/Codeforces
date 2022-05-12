#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	if (m <= 2 * n) {
		for (int i = 0; i < m; ++ i) cout << i + 1 << " ";
	} else {
		for (int i = 0; i < 2 * n; ++ i) {
			if (2 * n + i + 1 <= m) cout << 2 * n + i + 1 << " ";
			cout << i + 1 << " ";
		}
	}
	cout << endl;
	return 0;
}