#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, x, max = 0, tmp = 0, cnt = 0, a[100001] = {0};
	cin >> n;
	while(n --) {
		cin >> x;
		if(tmp < x) {
			cnt ++;	
		} else {
			if(max < cnt) max = cnt;
			cnt = 1;
		}	
		tmp = x;
	}
	if(max < cnt) max = cnt;
	cout << max;
	return 0;
}
