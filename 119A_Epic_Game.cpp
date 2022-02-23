#include <bits\stdc++.h>
using namespace std;
int gcd(int x, int y) {
	return y?gcd(y,x%y):x;
}
int main() {
	int a, b, sum;
	cin >> a >> b >> sum;
	while(sum > 0) {
		sum -= gcd(a, sum);
		if(sum <= 0) {
			cout << '0';
			break;
		}
		sum -= gcd(b,sum);
		if(sum <= 0) {
			cout << '1';
			break;
		}
	}
	return 0;
}