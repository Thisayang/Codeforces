#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k, mx = 0, a, flg = 1, cnt = 0;
	cin >> n >> k;
	for (int i = 0; i < k; ++ i) {
		cin >> a;
		ll tmp = n / a * a;
		if (tmp > mx) {
			mx = tmp;
			flg = i + 1;
			cnt = n / a;
		}
	}
	cout << flg << " " << cnt << endl;
	return 0;
}