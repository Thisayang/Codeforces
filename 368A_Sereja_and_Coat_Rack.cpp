#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, a[110], m, sum = 0;
	cin >> n >> d;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a, a + n);
	cin >> m;
	for (int i = 0; i < m && i < n; ++ i) {
		sum += a[i];
	}
	if (n < m) sum -= d * (m - n);
	cout << sum << endl;
	return 0;
}