#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a, int b) {
	if (a < b) return gcd(b, a);
	while (a % b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, sum = 0;
	cin >> n;
	for (int i = 2; i < n; ++ i) {
		int tmp = n;
		while (tmp > 0) {
			sum += tmp % i;
			tmp /= i;
		}
	}
	int b = gcd(sum, n- 2);
	sum /= b;
	cout << sum << "/" << (n - 2) / b << endl;
	return 0;
}