#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	int a[5] = {0, 0, 1, 2};
	while(t --) {
		int n;
		cin >> n;
		int ans = 0;
		if(n < 4) {
			cout << a[n] << endl;
			continue;
		}
		while(n % 2 != 0) {
			n --;
			ans ++;
		}
		if(n % 2 == 0) cout << ans + 1 + a[2] << endl;
	}
	return 0;
}
