#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[1010], min = 1000, x, y;
	cin >> n;
	cin >> a[0];
	for(int i = 1; i < n; i ++) {
		cin >> a[i];
		int res = abs(a[i] - a[i - 1]);
		if(min > res) {
			min = res;
			x = i, y = i + 1;
		}
	}
	if(min > abs(a[n - 1] - a[0])) x = n, y = 1;
	cout << x << ' ' << y;
	return 0;
}
