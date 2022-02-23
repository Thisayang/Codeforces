#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL n, x, y;
	cin >> n >> x >> y;
	LL max1 = max(x - 1, y - 1);
	LL max2 = max(n - x, n - y);
	if(max2 < max1) cout << "Black";
	else cout << "White";
	return 0;
}
