#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while(t --) {
		int ans = 0;
		cin >> a >> b >> c;
		while(b > 0 && c >= 2) b --, c -= 2, ans += 3;
		while(a > 0 && b >= 2) a --, b -= 2, ans += 3;
		cout << ans << endl;
	}
	return 0;
}
