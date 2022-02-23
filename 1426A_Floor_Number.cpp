#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, m;
		cin >> n >> m;
		if(n < 3) cout << 1 << endl;
		else if((n - 2) % m == 0) cout << (n - 2) / m + 1 << endl;
		else cout << (n - 2) / m + 2 << endl;
	}
	return 0;
}
