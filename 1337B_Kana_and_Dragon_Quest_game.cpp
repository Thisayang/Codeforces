#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int x, n, m;
		cin >> x >> n >> m;
		while(x > 20 && n --) 
				x = x / 2 + 10;
		x -= m * 10;
		if(x > 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
