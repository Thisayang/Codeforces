#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, min = 0, max = 0, a[50] = {0}, res = 0;
		cin >> n;
		for(int i = 1; i <= n; i ++) {
			cin >> a[i];
			if(a[i] == 1 && min == 0) max = min = i;
			if(a[i] == 1 && min != 0) max = i;
		}
		for(int i = min; i < max; i ++)
			if(a[i] == 0) res ++;
		cout << res << endl;
	}
	return 0;
}
