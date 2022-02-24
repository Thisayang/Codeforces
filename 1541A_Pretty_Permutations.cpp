#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		if(n & 1) {
			for(int i = 2; i <= n - 3; i += 2) {
				cout << i << ' ' << i - 1 << ' ';
			}
			cout << n - 1 << ' ' << n << ' ' << n - 2;
		} else {
			for(int i = 2; i <= n; i += 2) {
				cout << i << ' ' << i - 1 << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}