#include <bits\stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin >> t;
	while(t --) {
		cin >> n;
		if(n % 1111 == 0) cout << n / 1111 * 10;
		else if(n % 111 == 0) cout << 6 + (n / 111 - 1) * 10;
		else if(n % 11 == 0) cout << 3 + (n / 11 - 1) * 10;
		else cout << 1 + (n - 1) * 10;
		cout << endl;
	}
	return 0;
}