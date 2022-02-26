#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, m, n;
	cin >> t;
	while (t --) {
		cin >> m >> n;
		if (m == n) cout << 0 << endl;
		else if (n - m < n / 2) cout << n - m << endl;
		else cout << n % (n / 2 + 1) << endl;
	}
	return 0; 
}