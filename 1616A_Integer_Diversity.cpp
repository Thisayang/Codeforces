#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, x;
	cin >> t;
	while (t --) {
		cin >> n;
		int a[110] = {0};
		for (int i = 0; i < n; ++ i) {
			cin >> x;
			a[abs(x)] ++;
		}
		int cnt = 0;
		for (int i = 1; i <= 100; ++ i) {
			if (a[i] >= 2) cnt += 2;
			else cnt += a[i];
		}
		if (a[0] >= 1) cnt ++;
		cout << cnt << endl;
	}
	return 0;
}
