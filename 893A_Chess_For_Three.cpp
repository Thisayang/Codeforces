#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int tmp = 3, u1 = 1, u2 = 2, t;
bool win(int x) {
	if(u1 != x) {
		t = tmp;
		tmp = u1;
		u1 = t;
	}
	else {
		t = tmp;
		tmp = u2;
		u2 = t;
	} 
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100];
	while(cin >> n) {
		tmp = 3, u1 = 1, u2 = 2, t;
		bool flg = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i];
		for(int i = 0; i < n; ++ i) {
			if(tmp == a[i]) {
				flg = 1;
				break;
			}
			win(a[i]);
			//cout << u1 << ' ' << u2 << ' ' << tmp << endl;
		}
		if(flg) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
