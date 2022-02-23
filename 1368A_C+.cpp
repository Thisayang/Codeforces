#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int a, b, n, t = 0;
		cin >> a >> b >> n;
		while(a <= n && b <= n) {
			t ++;
			if(a < b) a += b;
			else b += a;
		}
		cout << t << endl;
	}
}