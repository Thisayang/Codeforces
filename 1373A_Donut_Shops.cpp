#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, a, b, c;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b >> c;
			if(a < c) cout << 1 << ' ';
			else cout << -1 << ' ';
			if(a * b > c) cout << b << endl;
			else cout << -1 << endl; 			
		}
	}
	return 0;
}
