#include <bits\stdc++.h>
using namespace std;
int a[1000001] = {1, 1};
		
int main() {
	for(int i = 2; i < 1000; i ++) {
		if(a[i] == 0) {
			for(int j = 2; i * j <= 1000000; j ++) {
				if(a[i * j] == 0) a[i * j] = i;
			}
		}
	}
	int t;
	cin >> t;
	while(t --) {
		long long n, k;
		cin >> n >> k;
		if(a[n] == 0) {
			n += n;
			n += (k - 1) * 2;
		}
		else {
			n += a[n];
			n += (k - 1) * 2;
		}
		cout << n << endl;
	}
	return 0;
}
