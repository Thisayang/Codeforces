#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<ll> a(10);
	cin >> n;
	for (int i = 0; i < 7; ++ i) {
		cin >> a[i];
	}
	int i = 0;
	while (n > 0) {
		n -= a[i % 7];
		i ++;
	}
	ll ans = i % 7;
	cout << (ans == 0 ? 7 : ans) << endl;
	return 0;
}