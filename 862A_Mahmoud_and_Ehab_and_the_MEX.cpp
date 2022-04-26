#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, a[110], ans = 0;
	cin >> n >> x;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	ans = x;
	sort(a, a + n);
	for (int i = 0; i < n; ++ i) {
		if (a[i] < x) ans --;
		else if (a[i] == x) ans ++;
		else break;
	}
	cout << ans << endl;
	return 0;
}