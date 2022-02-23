#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, b, s;
		cin >> a >> b;
		if(a < b) {
			s = a * 2 < b ? b : 2 * a;
		} else {
			s = b * 2 < a ? a : 2 * b;
		}
		cout << s * s << endl;
	}
	return 0;
}