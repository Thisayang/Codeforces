#include <bits\stdc++.h>
#define LL long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	ld a, b, x, y, v, min = 500.0, dis, t;
	while(cin >> a >> b >> n) {
		while(n --) {
			cin >> x >> y >> v;
			dis = sqrt(abs(a - x) * abs(a - x) + abs(b - y) * abs(b - y));
			t = dis / v;
			min = min < t ? min : t;
		}
		cout << fixed << setprecision(10) << min << endl;
	}
	return 0;
}
