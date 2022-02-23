#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, b, sub;
		cin >> a >> b;
		sub = a - b;
		if(sub > 0) {
			if(sub % 2 == 0) cout << 1 << endl;
			else cout << 2 << endl;
		} else if(sub < 0) {
			if(sub % 2 == -1) cout << 1 << endl;
			else cout << 2 << endl;
		} else cout << 0 << endl;
	}
	return 0;
}