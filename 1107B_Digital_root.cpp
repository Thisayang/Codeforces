#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, k, x;
	cin >> t;
	while (t --) {
		cin >> k >> x;
		cout << (k - 1) * 9 + x << endl;
	}
	return 0;
}