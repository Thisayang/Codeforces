#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x1, y1, x2, y2;
	cin >> t;
	while(t --) {
		cin >> x1 >> y1 >> x2 >> y2;
		if(x1 == x2 || y1 == y2) cout << abs(x1 - x2) + abs(y1 - y2) << endl;
		else cout << abs(x1 - x2) + abs(y1 - y2) + 2 << endl;
	}
	return 0;
}
