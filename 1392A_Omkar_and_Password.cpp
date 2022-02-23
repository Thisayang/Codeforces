#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, x, tmp, ok = 0;
		cin >> n;
		for(int i = 0; i < n; i ++) {
			cin >> x;
			if(i == 0) tmp = x;
			else if(tmp != x) {
				ok = 1;
			}
			tmp = x;
		}
		if(ok == 0) cout << n << endl;
		else cout << ok << endl;
	}
	return 0;
}
