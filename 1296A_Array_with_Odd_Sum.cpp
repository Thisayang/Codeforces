#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, sum = 0, x, ok = 0;
		cin >> n;
		for(int i = 0; i < n; i ++) {
			cin >> x; 
			if(x % 2 == 1) ok ++;
			sum += x;
		}
		if((sum % 2 == 1) || (ok && ok != n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}