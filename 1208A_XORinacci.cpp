#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, n;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b >> n;
			if(n % 3 == 0) cout << a << endl;
			else if(n % 3 == 1) cout << b << endl;
			else cout << (a ^ b) << endl;
		}
	}
	return 0;
}
