#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[3], d, ans = 0;
	cin >> a[0] >> a[1] >> a[2] >> d;
	sort(a, a + 3);
	if(a[2] - a[1] < d) ans += a[1] + d - a[2];
	if(a[1] - a[0] < d) ans += a[0] + d - a[1];
	cout << ans;
	return 0;
}
