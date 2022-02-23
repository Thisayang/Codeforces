#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
	while(cin >> t) {
		while(t --) {
			cin >> n >> m;
			for(int i = 0; i < n; ++ i) {
				for(int j = 0; j < m; ++ j) {
					if(i == 0 && j == 0) cout << "W";
					else cout << "B";
				}
				cout << endl;
			}
		}
	}
	return 0;
}
