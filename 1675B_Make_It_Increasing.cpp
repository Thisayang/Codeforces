#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[40];
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = n - 2; i >= 0; -- i) {
			while (a[i] >= a[i + 1] && a[i] > 0) {
				a[i] /= 2;
				cnt ++;
			}
			if (a[i] == a[i + 1]) {
				cnt = -1;
				break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}