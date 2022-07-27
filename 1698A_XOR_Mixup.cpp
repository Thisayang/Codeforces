#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			int sum = 0;
			if (i == 0) sum = a[1];
			else sum = a[0];
			for (int j = 2; j < n; ++ j) {
				if (i == j) continue;
				else {
					sum ^= a[j];
				}
			}
			if (sum == a[i]) {
				cout << a[i] << endl;
				break;
			}
		}
	}
	return 0;
}