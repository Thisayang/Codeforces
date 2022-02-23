#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, k, sum = 0;
		int a[40], b[40];
		cin >> n >> k;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		int low = 0, high = n - 1;
		while(k --) {
			if(a[low] < b[high]) {
				int temp = a[low];
				a[low] = b[high];
				b[high] = a[low];
			}
			low ++;
			high --;
		}
		for(int i = 0; i < n; i ++) sum += a[i];
		cout << sum << endl;
	}
	return 0;
}