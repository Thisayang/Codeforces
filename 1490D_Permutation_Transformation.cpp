#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int b[110] = {0}, a[110];;
void num(int s, int e, int ans){
	if(s >= e) return;
	int tmp = 0, flg = 0;
	for(int i = s; i < e; ++ i) {
		if(a[i] > tmp) tmp = a[i], flg = i;
	}
	b[flg] = ans;
	num(s, flg, ans + 1);
	num(flg + 1, e, ans + 1);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		memset(b, 0, sizeof(b));
		for(int i = 0; i < n; ++ i) cin >> a[i];
		num(0, n, 0);
		for(int i = 0; i < n; ++ i) cout << b[i] << ' ';
		cout << endl;
	}
	return 0;
}
