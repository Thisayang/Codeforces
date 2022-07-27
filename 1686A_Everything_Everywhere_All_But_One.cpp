#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int sum = 0, flg = 1, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		if (sum % n == 0) {
			for (int i = 0; i < n; ++ i) {
				if (a[i] == sum / n) cnt = 1;
			}
		}
		if (cnt == 1) flg = 0;
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}