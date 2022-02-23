#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, a, b, tmp, ans;
	cin >> t;
	while(t --) {
		cin >> a >> b;
		int n[1001] = {0}, ok = 0;
		while(a --) {
			cin >> tmp;
			n[tmp] = 1;
		}
		for(int i = 0; i < b; i ++) {
			cin >> tmp;
			if(n[tmp] == 1) {
				ok ++;
				ans = tmp;
			}
		}
		if(ok) {
			cout << "YES" << endl;
			cout << '1' << ' ' << ans << endl;
		} else cout << "NO" << endl;	
	}
	return 0;
}