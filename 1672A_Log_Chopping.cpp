#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60] = {0};
	cin >> t;
	while (t --) {
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i] - 1;
		}
		if (sum % 2 == 0) cout << "maomao90" << endl;
		else cout << "errorgorn" << endl;
	}
	return 0;
}