#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll f[100010] = {1, 1};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	for (int i = 2; i < 100001; ++ i) {
		f[i] = ((i << 1) - 1ll) * f[i - 1] % 1000000007 * (i << 1) % 1000000007;
	}
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}