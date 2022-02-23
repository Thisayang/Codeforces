#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int l, r, a, ans;
	cin >> l >> r >> a;
	if(l != r) {
		int flg = abs(l - r);
		if(a >= flg) ans = max(l, r), a = a - flg, cout << ans * 2 + a / 2 * 2;
		else ans = min(l + a, r + a), cout << ans * 2;
	}
	else cout << l * 2 + a / 2 * 2;
	return 0;
}
