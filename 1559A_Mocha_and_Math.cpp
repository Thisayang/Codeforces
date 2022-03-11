#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a, ans = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			if (i == 0) ans = a;
			else ans &= a;
		}
		cout << ans << endl;
	}
	return 0;
}