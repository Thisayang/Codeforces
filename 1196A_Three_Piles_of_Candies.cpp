#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		long long a, b, c, sum;
		cin >> a >> b >> c;
		sum = a + b + c;
		printf("%lld\n", sum / 2);
	}
	return 0;
}
