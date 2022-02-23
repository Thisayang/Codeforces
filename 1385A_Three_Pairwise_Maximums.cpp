#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int x, y, z, a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if(a[1] == a[2]) {
			cout << "YES" << endl;
			cout << a[0] << ' ' << a[0] << ' ' << a[2] << endl;
		} else cout << "NO" << endl;
	}
	return 0;
}