#include <bits\stdc++.h>
using namespace std;
int main() {
	int x, y, z, max;
	cin >> x >> y;
	max = x > y ? x : y;
	z = 7 - max;
	if(z == 6) cout << "1/1";
	else if(z % 2 == 0) cout << z / 2 << "/3";
	else if(z == 3) cout << "1/2";
	else cout << z << "/6";
	return 0;
}