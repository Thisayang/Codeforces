#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (i > 1) {
				if (a[i] % 2 != a[i - 2] % 2) flg = 1;
			}
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}