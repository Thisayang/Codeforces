#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[100010], i;
	while(cin >> t) {
		while(t --) {
			cin >> n;
			for(i = 1; i <= n; ++ i) cin >> a[i];
			sort(a + 1, a + n + 1);
			for(i = n; i >= 1; -- i) 
				if(i + 1 > a[i]) break;
			cout << i + 1 << endl;
		}
	}
	return 0;
}
