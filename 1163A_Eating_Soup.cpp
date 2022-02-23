
#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	while(cin >> n >> m) {
		if(m == 0) cout << 1 << endl;
		else if(m == n) cout << 0 << endl;
		else cout << min(m, min(n - m, n / 2)) << endl;
	}
	return 0;
}
