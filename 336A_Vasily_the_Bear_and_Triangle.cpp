#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x, y;
	cin >> x >> y;
	int ans = abs(x) + abs(y);
	if (x > 0 && y > 0) cout << "0 " << ans << " " << ans << " 0" << endl;
	else if (x < 0 && y > 0) cout << ans * -1 << " 0 0 " << ans << endl;
	else if (x > 0 && y < 0) cout << 0 << " " << ans * -1 << " " << ans << " 0" << endl;
	else cout << ans * -1 << " 0 0 " << ans * -1 << endl;
	
	return 0;
}