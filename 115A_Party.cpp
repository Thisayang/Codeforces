#include <bits\stdc++.h>
using namespace std;
int main() {
	int t, a[2010] = {0}, ans[2010] = {0}, max = 0;
	cin >> t;
	for(int i = 1; i <= t; i ++) {
		cin >> a[i];
		if(a[i] == -1) ans[i] = 1;
	}
	for(int i = 1; i <= t; i ++) {
		int temp = i, res = 0;
		while(temp > -1) {
			if(ans[temp] != 0) {
				ans[i] = res + ans[temp];
				break;
			}
			temp = a[temp];
			res ++;
		}
	}
	for(int i = 1; i <= t; i ++) max = max > ans[i] ? max : ans[i]; 	
	cout << max;
	return 0;
}
