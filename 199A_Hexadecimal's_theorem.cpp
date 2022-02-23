#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[520] = {0, 1};
	for(int i = 2; i < 511; ++ i) a[i] = a[i - 1] + a[i - 2];
	while(cin >> n) {
		int i;
		for(i = 0; a[i] < n;) ++ i; 
		if(n < 2) cout << 0 << ' ' << 0 << ' ' << n << endl;
		else cout << a[i - 3] << ' ' << a[i - 2] << ' ' << a[i - 2] << endl;
	}
	return 0;
}
