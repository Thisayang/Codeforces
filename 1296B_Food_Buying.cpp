#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, m;
		cin >> n;
		m = n;
		while(n >= 10) {
			m += n / 10;
			n =  n % 10 + n / 10;
		}
		cout << m << endl;
	}
	return 0;
}
