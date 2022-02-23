#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, k, l, c, d, p, nl, np, min;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int x = k * l / nl;
	int y = c * d ;
	int z = p / np;
	min = x < y ? x : y;
	min = min < z ? min : z;
	cout << min / n << endl;
	return 0;
}