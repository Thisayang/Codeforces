#include <bits\stdc++.h>
using namespace std;
int main() {
	long long k, n;
	cin >> k >> n;
	if(k % 2 == 1) {
		if(n <= k / 2 + 1) cout << 2 * n - 1;
		else cout << k - (k - n + 1) * 2 + 1;	
	} else {
		if(n <= k / 2) cout << 2 * n - 1;
		else cout << k - (k - n) * 2;
	}
	return 0;
}
