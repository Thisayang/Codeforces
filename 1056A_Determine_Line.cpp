#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, r, x, a[110] = {0};
	cin >> n;
	for(int j = 0; j < n; ++ j) {
		cin >> r;
		for(int i = 0; i < r; ++ i) {
			cin >> x;
			a[x] ++;
		}
	}
	for(int i = 0; i < 101; ++ i) 
		if(a[i] == n) cout << i << ' ';
	return 0;
}
