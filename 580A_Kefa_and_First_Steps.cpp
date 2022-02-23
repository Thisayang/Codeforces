#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, a[100001] = {0};
	cin >> n;
	int temp = 0, cnt = 0, max = 0;
	for(int i = 0; i < n; i ++) {
		cin >> a[i];
		if(temp <= a[i]) cnt ++;
		else {	
			if(max < cnt) max = cnt;
			cnt = 1;
		}
		temp = a[i];
	}
	if(max < cnt) max = cnt;
	cout << max << endl;
	return 0;
}
