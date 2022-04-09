#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) cin >> a[i];
		int mn = *min_element(a.begin(), a.begin()+ n);
		for (int i = 0, k = 0; k < n / 2; ++ i) {
			if (a[i] != mn) {
				cout << a[i] << ' ' << mn << endl;
				k ++;
			}
		}
	}
	return 0;
}