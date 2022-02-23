#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, x, a, b, dis;
		cin >> n >> x >> a >> b;
		dis = abs(a - b);
		while(x -- && dis < n - 1) dis ++;
		cout << dis << endl;
	}
	return 0;
}
