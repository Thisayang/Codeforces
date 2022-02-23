#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int y, b, r, sum;
	cin >> y >> b >> r;
	sum = 3 * r - 3;
	while(b < r - 1) {
		sum -= 3;
		r --;
	}
	b = r - 1;
	while(y < b - 1) {
		sum -= 3;
		b --;
	}
	cout << sum << endl;
	return 0;
}
