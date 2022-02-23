#include <bits\stdc++.h>
using namespace std;
int main() {
	int m, n, sum = 0, ans = 0;
	cin >> m >> n;
	ans = m;
	sum = m;
	while(ans >= n) {
		int tmp = ans / n;
		sum += tmp;
		ans -= tmp * n;
		ans += tmp;
	}
	cout << sum;
	return 0;
}
