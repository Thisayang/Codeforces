#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[2010] = {0}, b[2010] = {0}, ans[2010], max = 0, min = 2000;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
		b[a[i]] ++;
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
	int ok = 1;
	for(int i = max; i >= min; i --) {
		for(int j = 0; j < n; j ++) {
			if(a[j] == i) ans[j] = ok;
		}
		ok += b[i];
	}
	for(int i = 0; i < n; i ++) cout << ans[i] << ' ';
	cout << endl;
	return 0;
}
