#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, b[110] = {0}, ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++ i) {
		cin >> x;
		b[x] ++;
	}
	for(int i = 1; i < 101; ++ i) {
		if(b[i]) {
			ans ++;
			for(int j = 1; i * j < 101; ++ j)
				b[i * j] = 0;
		}
	}
	cout << ans;
	return 0;
}
