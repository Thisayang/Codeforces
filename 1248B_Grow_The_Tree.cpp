#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL n, a[100010] = {0};
	while(cin >> n) {
		LL x = 0, y = 0, sum = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		sort(a, a + n);
		for(int i = 0; i < n; ++ i){
			if(i < n / 2) x += a[i];
			else y += a[i];
		}
		sum = x * x + y * y;
		cout << sum << endl;
	}
	return 0;
}
