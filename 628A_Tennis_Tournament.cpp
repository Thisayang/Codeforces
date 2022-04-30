#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, b, p, sum = 0, t;
	cin >> n >> b >> p;
	t = n;
	while (n > 1) {
		sum += n / 2;
		if (n % 2 == 1) n = n / 2 + 1;
		else n /= 2;
	}
	cout << sum * (2 * b + 1) << " " << t * p << endl;
	return 0;
}