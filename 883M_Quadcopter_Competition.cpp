#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int ans = (abs(x1 - x2) + 1 + abs(y1 - y2) + 1) * 2;
	if (x1 == x2 || y1 == y2) ans += 2; 
	cout << ans << endl;
	return 0;
}