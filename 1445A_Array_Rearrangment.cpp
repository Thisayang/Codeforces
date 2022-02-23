#include <bits\stdc++.h>
#define LL long long
using namespace std;
int t, n, x, a[60], b[60];
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> t;
	while(t --) {
		cin >> n >> x;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++) cin >> b[i];
		sort(b, b + n, cmp);
		bool flg = true;
		for(int i = 0; i < n; i ++){
			if(a[i] + b[i] > x) {
				flg = !flg;
				break;
			}
		}
		if(flg) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
