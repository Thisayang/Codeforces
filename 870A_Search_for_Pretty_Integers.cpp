#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[20], b[20];
	while(cin >> n >> m) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		for(int i = 0; i < m; ++ i) cin >> b[i];
		sort(a, a + n);
		sort(b, b + m);
		bool flg = 0;
		for(int i = 0; i < n; ++ i) {
			for(int j = 0; j < m; ++ j) {
				if(a[i] == b[j]) {
					cout << a[i] << endl;
					flg = 1;
					break;
				}
			}
			if(flg) break;
		}
		if(!flg) {
			if(a[0] > b[0]) cout << b[0] << a[0] << endl;
			else if(a[0] < b[0]) cout << a[0] << b[0] << endl;
		}
	}
	return 0;
}
