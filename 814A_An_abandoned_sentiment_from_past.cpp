#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a[210], b[210];
	while(cin >> n >> k) {
		for(int i = 0; i < n; ++ i) cin >> a[i];
		for(int i = 0; i < k; ++ i) cin >> b[i];
		if(k > 1) cout << "YES" << endl;
		else if(k == 1) {
			bool flg = 1;
			for(int i = 0; i < n; ++ i) 
				if(a[i] == 0) a[i] = b[0];
			for(int i = 0; i < n - 1; ++ i) {
				if(a[i] > a[i + 1]) {
					flg = 0;
					break;
				}
			}
			if(flg) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
