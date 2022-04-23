#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	vector<ll> a(100010);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin()+ n);
	ll sum = 0;
	for (int i = 0, cnt = 0; cnt < k; ++ i) {
		if (i < n) {
			a[i] -= sum;
			if (a[i] != 0) {
				cout << a[i] << endl;
				cnt ++;
			}
			sum += a[i];
		}
		else {
			cout << 0 <<endl;
			cnt ++;
		}
	}
	return 0;
}