#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, q;
	while(cin >> n >> q) {
		int a[100010], b, c, s1 = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(a[i]) s1 ++;
		}
		for(int i = 0; i < q; ++ i) {
			cin >> b >> c;
			if(b == 1) {
				a[c - 1] = 1 - a[c - 1];
				if(a[c - 1]) s1 ++;
				else s1 --;
			}
			else if(c <= s1) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	return 0;
}
