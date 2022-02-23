#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, x = 0, y = 0, z = 0, a, b, c;
	cin >> n;
	while(n --) {
		cin >> a >> b >> c;
		x += a;
		y += b;
		z += c;
	} 
	if(!x && !y && !z) cout << "YES";
	else cout << "NO";
	return 0;
}
