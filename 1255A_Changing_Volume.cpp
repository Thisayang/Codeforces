#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	int x[5] = {0, 1, 1, 2, 2};
	while(t --) {
		cin >> a >> b;
		int s = abs(a - b);
		int ans = s / 5;
		ans += x[s % 5];
		cout << ans << endl;
	}
	return 0;
}
