#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, a[1010], sum = 0, ans;
	cin >> n >> x;
	for(int i = 0; i < n; i ++) cin >> a[i], sum += a[i];
	if(sum > 0) {
		ans = sum / x;
		if(sum % x) ans += 1;
	}
	else {
		ans = abs(sum) / x;
		if(abs(sum) % x) ans += 1;
	}
	cout << ans;
	return 0;
}
