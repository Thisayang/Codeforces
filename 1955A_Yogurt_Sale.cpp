#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	int n;
	int a;
	int b;
	while (t--) {
		cin >> n >> a >> b;
		if (a * 2 < b) {
			cout << a * n << endl;
		} else {
			cout << n / 2 * b + (n % 2) * a << endl;
		}
	}
	return 0;
}