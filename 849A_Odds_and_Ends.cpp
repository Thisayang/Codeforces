#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[110];
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	if (a[0] % 2 == 0 || a[n - 1] % 2 == 0) cout << "NO" << endl;
	else if (n % 2 == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}