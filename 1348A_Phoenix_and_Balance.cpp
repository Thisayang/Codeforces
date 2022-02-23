#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, sum = 0, x = 2;;
		cin >> a;
		for(int i = 0 ; i < a; i += 2) {
			sum += x;
			x *= 2;
		}
		cout << sum << endl;
	}
	return 0;
}