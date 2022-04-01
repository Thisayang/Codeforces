#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp (int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector <int> a (200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n == 1 && a[0] > 1) cout << "NO" << endl;
		else {
			sort (a.begin(), a.begin() + n, cmp);
			if (a[0] - a[1] > 1) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}