#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, sum = 3, cnt = 4;
		cin >> a;
		while(a % sum != 0) {
			sum += cnt;
			cnt *= 2;
		}
		cout << a / sum << endl;
	}
	return 0;
}
