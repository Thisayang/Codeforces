#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main(){
	int t, n, k;
	cin >> t;
	while(t --){
		cin >> n >> k;
		if (n < k || (n & 1 && k % 2 == 0) || (n % 2 == 0 && k % 2 == 1 && k > n / 2)) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			if (n % 2 == 0 && k & 1) {
				FOR(i, 1, k) cout << 2 << " ";
				cout << n - (k - 1) * 2 << endl;
			} else if (n % 2 == 0 && k % 2 == 0) {
				FOR(i, 1, k) cout << 1 << " ";
				cout << n - (k - 1) << endl;
			} else {
				FOR(i, 1, k) cout << 1 << " ";
				cout << n - (k - 1) << endl;
			}
		}
		
		
	}
	return 0;
}