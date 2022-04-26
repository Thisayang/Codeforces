#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[15], mn = 1001, flg = -1;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if (a[i] < mn) {
			mn = a[i];
			flg = i + 1;
		}
	}
	if (n == 1 || (n == 2 && a[0] == a[1])) {
		cout << -1 << endl;
	} else {
		cout << 1 << endl;
		cout << flg << endl;
	}
	return 0;
}