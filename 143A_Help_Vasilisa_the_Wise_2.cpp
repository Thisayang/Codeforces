#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r1, r2, c1, c2, d1, d2, flg = 0;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for (int i = 1; i < 10; ++ i) {
		int a = r1 - i;
		if (a == i || a > 9 || a < 1) continue;
		int b = c1 - i;
		if (b == i || b == a || b > 9 || b < 1) continue; 
		int c = d1 - i;
		if (c == i || c == a || c == b || c > 9 || c < 1) continue;
		if (b + c != r2 || a + c != c2 || a + b != d2) {
			continue;
		} else {
			cout << i << " " << a << "\n" << b << " " << c << endl;
			flg = 1;
		}
	}
	if (flg == 0) cout << -1 << endl;
	return 0;
}