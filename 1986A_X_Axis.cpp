#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int cnt = 3;
	int x[cnt];
	cin >> t;
	while (t--) {
		cin >> x[0] >> x[1] >> x[2];
		sort(x, x + 3);
		cout << x[2] - x[0] << endl;
	}
	return 0;
}