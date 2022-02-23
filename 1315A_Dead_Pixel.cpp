#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, x, y;
	cin >> t;
	while(t --) {
		cin >> a >> b >> x >> y;
		int s1 = max((a - x - 1) * b, x * b);
		int s2 = max(a * (b - y - 1), a * y);
		cout << max(s1, s2) << endl;
	}
	return 0;
}
