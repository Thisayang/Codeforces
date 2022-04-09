#include <bits\stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double h, l, x;
	cin >> h >> l;
	x = (l * l - h * h) / (2 * h);
	printf("%.10f\n", x);
	return 0;
}
