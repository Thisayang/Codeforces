#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[200010];
	cin >> t;
	while(t --) {
		cin >> n;
		long long sum = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		long long k = sum % n;
		long long ans = k * (n - k);
		cout << ans << '\n';
	}
	return 0;
}