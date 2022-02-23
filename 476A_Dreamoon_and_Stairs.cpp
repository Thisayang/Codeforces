#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	while(cin >> n >> m) {
		if(n < m) cout << -1 << endl;
		else {
			int min = (n + 1) / 2;
			for(int i = min; i <= n; ++ i) {
				if(i % m == 0) {
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}
