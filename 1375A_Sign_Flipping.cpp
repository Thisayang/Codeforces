#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[100];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			if (i % 2 == 0 && a[i] > 0) a[i] *= -1;
			if (i % 2 == 1 && a[i] < 0) a[i] *= -1;
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}