#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector <int> a(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		auto mx = max_element(a.begin(), a.begin() + n);
		auto mn = min_element(a.begin(), a.begin() + n);
		cout << mn - a.begin() + 1 << " " << mx - a.begin() + 1 << endl;
	}
	return 0;
}