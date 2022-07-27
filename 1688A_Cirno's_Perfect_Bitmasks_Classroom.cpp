#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int lowbit(int t) {
	return t & (-t);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x;
	cin >> t;
	while (t --) {
		cin >> x;
		int ans = lowbit(x);
		while (ans == x || (x & ans) == 0) ans ++;
		cout << ans << endl;
	}
	return 0;
}