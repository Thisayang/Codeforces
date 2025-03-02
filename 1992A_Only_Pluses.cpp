#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int a[3];
	int cnt = 5;
	cin >> t;
	while (t--) {
		cin >> a[0] >> a[1] >> a[2];
		for (int i = 0; i < cnt; ++i) {
			sort(a, a + 3);
			++a[0];
		}
		cout << a[0] * a[1] * a[2] << endl;
	}
	return 0;
}