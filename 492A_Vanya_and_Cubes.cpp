#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, i, num;
	cin >> n;
	for(i = 1, num = 0; n - num >= i; i ++) {
		num += i;
		n -= num;
	}
	cout << i - 1 << endl;
	return 0;
}