#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, m, a[100];
	cin >> n >> m;
	for(int i = 0; i < m; i ++) cin >> a[i];
	sort(a, a + m);
	int tmp, min = 1000;
	for(int i = 0; i + n - 1 < m; i ++) {
		tmp = a[i + n - 1] - a[i];
		if(tmp < min) min = tmp;
	}
	cout << min;
	return 0;
}
