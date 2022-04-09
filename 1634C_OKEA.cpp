#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		if (n % 2 == 1 && k > 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			if (k == 1) {
				for (int i = 1; i <= n; ++ i) {
					cout << i << endl;
				}
			} else {
				int cnt = 0;
				for (int i = 1; i < n * k; i += 2) {
					cout << i << " ";
					cnt ++;
					if (cnt == k) {
						cnt = 0;
						cout << endl;
					}
				}
				for (int i = 2; i <= n * k; i += 2) {
					cout << i << " ";
					cnt ++;
					if (cnt == k) {
						cnt = 0;
						cout << endl;
					}
				}
			}
		}
	}
	return 0;
}