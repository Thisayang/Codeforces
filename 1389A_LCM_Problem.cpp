#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, l, r;
	cin >> t;
	while(t --) {
		int x = -1, y = -1;
		cin >> l >> r;
		if(l * 2 <= r) {
			x = l;
			y = 2 * l;
		}
		cout << x << ' ' << y << endl;
	}
	return 0;
}