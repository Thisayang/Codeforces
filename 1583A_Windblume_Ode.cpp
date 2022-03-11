#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	int x[20010] = {1, 1};
	for (int i = 2; i < 150; ++ i) {
		if (x[i] == 1) continue;
		for (int j = 2; i * j < 20010; ++ j) x[i * j] = 1;
	}
	while (t --) {
		cin >> n;
		vector<int> a(n);
		int sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			sum += a[i];
		}
		if (sum % 2 == 0 || x[sum] == 1) {
			cout << n << endl;
			for (int i = 1; i <= n; ++ i) cout << i << " \n"[i == n];
		} else {
			cout << n - 1 << endl;
			for (int i = 0; i < n; ++ i) {
				if (a[i] % 2 == 1) {
					for (int j = 0; j < n; ++ j) {
						if (i != j) cout << j + 1 << " ";
					}
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}