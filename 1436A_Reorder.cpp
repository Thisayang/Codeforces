#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, m, x, sum = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i ++) {
			cin >> x;
			sum += x;
		}
		if(sum == m) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
