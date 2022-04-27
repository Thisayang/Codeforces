#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010];
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0, cnt = 1; i <= (n - 1) / 2; ++ i, cnt ++) {
		cout << a[i] << " ";
		if (n - i - 1 != i) cout << a[n - i - 1] << " ";
	}
	return 0;
}