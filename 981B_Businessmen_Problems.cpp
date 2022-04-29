#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, m, a, b, sum = 0;
	set<ll> sett;
	map<ll, ll> x, y;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a >> b;
		sett.insert(a);
		x[a] = b;
	}
	cin >> m;
	for (int i = 0; i < m; ++ i) {
		cin >> a >> b;
		sett.insert(a);
		y[a] = b;
	}
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		sum += max(x[*it], y[*it]);
	}
	cout << sum << endl;
	return 0;
}