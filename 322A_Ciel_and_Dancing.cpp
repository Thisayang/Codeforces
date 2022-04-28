#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	cout << n + m  - 1 << endl;
	for (int i = 1; i <= m; ++ i) {
		cout << 1 << " " << i << endl;
	}
	for (int j = 2; j <= n; ++ j) {
		cout << j << " " << 1 << endl;
	}
	return 0;
}