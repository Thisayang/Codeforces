#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x, y, z;
	cin >> x >> y >> z;
	if(x + z > y && x > z + y) cout << '+' << endl;
	else if(y + z > x && y > z + x) cout << '-' << endl;
	else if(y + z == x && x + z == y) cout << '0' << endl;
	else cout << '?' << endl;
	return 0;
}
