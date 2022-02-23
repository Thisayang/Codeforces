#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, d;
	cin >> t;
	while(t --) {
		cin >> n >> d;
		int a[110];
		for(int i = 0; i < n; i ++) cin >> a[i];
		int i = 1;
		while(d > 0 && i < n) {
			while(a[i] > 0 && d - i >= 0) a[0] ++, d -= i, a[i] --;
			i ++;
		}
		cout << a[0] << endl;
	}
	return 0;
}
