#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void input(vector <int> a, int k) {
	for (int i = 0; i < k; ++ i) {
		cin >> a[i];
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, w, h, k;
	vector <ll> a(200010);
	cin >> t;
	while (t --) {
		cin >> w >> h;
		ll max1 = 0, max2 = 0;
		for (int i = 0; i < 4; ++ i) {
			cin >> k;
			for (int i = 0; i < k; ++ i) {
				cin >> a[i];
			}
			if (i < 2) max1 = max(max1, a[k - 1] - a[0]); 
			else max2 = max(max2, a[k - 1] - a[0]);
		}
		cout << (max1 * h > max2 * w ? max1 * h : max2 * w) << endl; 
	}
	return 0;
}