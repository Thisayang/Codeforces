#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			while(n) {
				if(n & 1) n -= 3, cout << '7';
				else n -= 2, cout << '1';
			}
			cout << endl;
		}
	}
	return 0;
}
