#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll  n, k;
	cin >> n >> k;
	if (k - n >= n) cout << 0 << endl;
	else if (n >= k) cout << (k - 1) / 2 << endl;
	else cout << (n - (k - n) + 1) / 2 << endl;
	return 0;
}