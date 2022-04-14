#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, l, r, tmp = 1, cnt = 0;
	cin >> n >> x;
	int sum = 0;
	for (int i = 0; i < n; ++ i) {
		cin >> l >> r;
		cnt += (l - tmp) / x;
		tmp = r + 1;
	}
	cout << tmp - cnt * x  - 1 << endl;
	return 0;
}