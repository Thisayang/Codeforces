#include <bits\stdc++.h>
using namespace std;
int main() {
	int x, y, z, max;
	cin >> x >> y >> z;
	int xy = x * y, yz = y * z;
	int add1 = x + y, add2 = y + z;
	int mul = x * y * z;
	int sum = x + y + z;
	max = sum > mul ? sum : mul;
	max = xy + z > max ? xy + z : max;
	max = x + yz > max ? x + yz : max;
	max = add1 * z > max ? add1 * z : max;
	max = x * add2 > max ? x * add2 : max;
	cout << max;
	return 0;
}
