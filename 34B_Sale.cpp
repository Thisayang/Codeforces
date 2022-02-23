#include <bits\stdc++.h>
using namespace std;
int main() {
	int m, n, a[110] = {0}, max = 0;
	cin >> m >> n;
	for(int i = 0; i < m; i ++) cin >> a[i];
	sort(a, a + m);
	for(int i = 0; i < n; i ++) {
		if(a[i] <= 0) max -= a[i];
		else break;
	}
	cout << max << endl;
	return 0;
}
