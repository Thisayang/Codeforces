#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	int n;
	while (t--) {
		cin >> n;
		cout << n / 4 + (n % 4 / 2) << endl;
	}
	return 0;
}