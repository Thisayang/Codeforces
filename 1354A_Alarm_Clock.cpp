#include <bits\stdc++.h>
#define LL long long
using namespace std;
LL solve(LL a, LL b, LL c, LL d) {
		if(b >= a) return b;
		if(c <= d) return -1;
		a -= b;
		b += (a - 1 + (c - d)) / (c - d) * c;
		return b;	
}
int main() {
	int t;
	cin >> t;
	while(t --) {
		LL a, b, c, d, s;
		cin >> a >> b >> c >> d;
		cout << solve(a, b, c, d) << endl;
	}
	return 0;
}
