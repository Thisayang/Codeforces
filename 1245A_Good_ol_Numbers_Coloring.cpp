#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a, int b) {
	if (a < b) return gcd(b ,a);
	while(a % b != 0){
		int r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	cin >> t;
	while (t --) {
		cin >> a >> b;
		cout << (gcd(a, b) == 1 ? "Finite" : "Infinite") << endl;
	}
	return 0;
}