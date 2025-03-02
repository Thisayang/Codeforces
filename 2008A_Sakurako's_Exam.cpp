#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int a;
	int b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a % 2 == 0 && (a >= 2 || b % 2 == 0)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}