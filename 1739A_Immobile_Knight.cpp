#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		int m;
		cin >> n >> m;
		if(n == 1 || m == 1) cout<<"1 1"<<endl;
		else cout<<"2 2"<<endl;
	}
	return 0;
}