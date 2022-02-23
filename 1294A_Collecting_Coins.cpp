#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int sum = 0, avg = 0, a, b, c, d;
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		avg = sum / 3;
		if(sum % 3 == 0 && a <= avg && b <= avg && c <= avg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}