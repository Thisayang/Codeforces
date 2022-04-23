#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll x, y, z;
	cin >> x >> y >> z;
	ll num = (x + y) / z;
	ll ans = min(z - x % z, z - y % z);
	if (x / z + y / z == num) ans = 0;
	if (x % z == 0 || y % z == 0) ans = 0; 
	cout << (x + y) / z << " " << ans << endl;
	return 0;
}