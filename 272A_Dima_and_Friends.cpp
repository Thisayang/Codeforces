#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	vector <int> a(n);
	int sum = 0, ans = 0;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 1; i < 6; ++ i) {
		if ((sum + i) % (n + 1) != 1)  ans ++;
	}
	cout << ans << endl;
	return 0;
}