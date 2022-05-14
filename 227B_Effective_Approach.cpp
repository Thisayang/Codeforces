#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, b;
	vector<ll> a(100010);
	map<int, int> mp1, mp2;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		mp1[a[i]] = i + 1;
		mp2[a[i]] = n - i;
	}
	cin >> m;
	ll sum1 = 0, sum2 = 0;
	for (int j = 0; j < m; ++ j) {
		cin >> b;
		sum1 += mp1[b];
		sum2 += mp2[b];
	}
	cout << sum1 << " " << sum2 << endl;
	return 0;
}