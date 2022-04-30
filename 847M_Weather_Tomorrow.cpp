#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110],ans = 0, flg = 0;
	cin >> n >> a[0] >> a[1];
	ans = a[1] - a[0];
	if (n == 2) cout << a[1] + ans << endl;
	else {
		for (int i = 2; i < n; ++ i) {
			cin >> a[i];
			if (a[i] - a[i - 1] != ans) flg = 1;
		}
		cout << (flg == 1 ? a[n - 1] : a[n - 1] + ans) << endl;
	}
	return 0;
}