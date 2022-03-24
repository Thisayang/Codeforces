#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> a(400010);
bool cmp (int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
	cin >> t;
	while (t --) {
		cin >> n >> k;
		for (int i = 0; i < k; ++ i) {
			cin >> a[i];
		}
		sort (a.begin(), a.begin() + k, cmp);
		ll ans = 0, sum = 0;
		while (ans < k && sum + n - a[ans] < n) {
			sum += n - a[ans ++];
		}
		cout << ans << endl;
	}
	return 0;
}