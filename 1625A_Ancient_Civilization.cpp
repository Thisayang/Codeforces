#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, l;
	cin >> t;
	while (t --) {
		cin >> n >> l;
		vector<int> a(n);
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int e = 1, sum = 0;
		while (a[n - 1] > 0) {
			int o = 0, z = 0;
			for (int i = 0; i < n; ++ i) {
				if (a[i] % 2 == 0) o ++;
				else z ++;
				a[i] /= 2;
			}
			if (z > o) sum += e;
			e *= 2;
		}
		cout << sum << endl;
	}
	return 0;
}