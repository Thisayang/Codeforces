#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, p, ans = 0, min = 100;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> a >> p;
		min = min < p ? min : p;
		ans += min * a;
	}
	cout << ans << endl;
	return 0;
}
