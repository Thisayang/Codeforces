#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, m, a, sum = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i ++) {
			cin >> a;
			sum += a;
		}
		if(sum > m) cout << m << endl;
		else cout << sum << endl;
	}
	return 0;
}
