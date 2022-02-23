#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a[10], b[10];
	while(cin >> t) {
		while(t --) {
			cin >> a[0] >> b[0] >> a[1] >> b[1];
			int max1 = max(a[0], b[0]), max2 = max(a[1], b[1]);
			int min1 = min(a[0], b[0]), min2 = min(a[1], b[1]);
			if(min1 + min2 == max1 && max1 == max2) cout << "YES" << endl;
			else cout << "NO" << endl; 			
		}
	}
	return 0;
}
