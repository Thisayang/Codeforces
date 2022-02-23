#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, a, x[60] = {0};
		cin >> n;
		for(int i = 0; i < 2 * n; i ++) {
			cin >> a;
			if(x[a] == 0) cout << a << ' ';
			x[a] ++;
		}
		cout << endl;
	}
	return 0;
}