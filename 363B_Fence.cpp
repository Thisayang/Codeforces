#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	vector<int> a(150010);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
		if (i != 0) a[i] += a[i - 1];
	}
	int min = a[k - 1], ans = 1;
	for (int i = k, j = 0; i < n; ++ i, ++ j) {
		if (a[i] - a[j] < min) {
			min = a[i] - a[j];
			ans = j + 1 + 1;
		}
	}
	cout << ans << endl;
	return 0;
}