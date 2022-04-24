#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k;
	vector<ll> a(100010);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	ll sum = 0;
	for (int i = 1; i <= n; ++ i) {
		if (sum + i >= k) {
			cout << a[k - sum - 1] << endl;
			break;
		}
		sum += i;
	}
	return 0;
}