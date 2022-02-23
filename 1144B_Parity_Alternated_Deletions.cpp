#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[2010];
	while(cin >> n) {
		LL odd = 0, even = 0, ans = 0;
		for(int i = 0; i < n; ++ i) {
			cin >> a[i];
			if(a[i] & 1) odd ++;
			else even ++;
		}
		int num = abs(odd - even), tmp = 0;
		if(num > 1) {
			sort(a, a + n);
			if(odd > even) tmp = 1;
			for(int i = 0; num > 1; ++ i)
				if(a[i] % 2 == tmp) {
					ans += a[i];
					-- num;
				}
		}
		cout << ans << endl;
	}
	return 0;
}
