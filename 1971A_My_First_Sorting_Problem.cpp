#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int x;
	int y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		cout << min(x, y) << " " << max(x, y) << endl;
	}
	return 0;
}