#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, u, v;
	cin >> t;
	while (t --) {
		cin >> u >> v;
		cout << -1 * u * u << " " << v * v << endl; 
	}
	return 0;
}