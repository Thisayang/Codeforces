#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, tmp[110], tmp2, flg = 0, sum = 0;
		cin >> n;
		for(int i = 0; i < n; i ++) cin >> tmp[i];
		for(int i = 1; i < n; i ++) {
			if((tmp[i - 1] + tmp[i]) % 2 == 1) {
				flg = 1;
				break;
			}
		}
		if(flg == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
