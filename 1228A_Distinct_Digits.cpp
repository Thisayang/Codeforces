#include <bits\stdc++.h>
using namespace std;
int main() {
	int l, r, flg = 0; 
	cin >> l >> r;
	for(int i = l; i <= r; i ++) {
		int tmp = i, a[10] = {0}, ok = 0;
		while(tmp > 0) {
			a[tmp % 10] ++;
			tmp /= 10;
		}
		for(int j = 0; j < 10; j ++) {
			if(a[j] > 1) {
				ok = 1;
				break;
			}
		}	
		if(ok == 0){
			cout << i;
			flg = 1;
			break;
		} 
	}
	if(flg == 0) cout << "-1";
	return 0;
}
