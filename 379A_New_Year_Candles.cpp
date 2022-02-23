#include <bits\stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int ans = a;
	while(a >= b) {
		ans += a / b;
		a = a - a / b * b + a / b;
	}
	cout << ans;
	return 0;
}
