#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, k, b;
		cin >> n >> k;
		if(n <= k) cout << k - n << endl;
		else {
			if((n + k) & 1) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}
