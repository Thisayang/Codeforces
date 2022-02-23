#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, a[310];
		cin >> n;
		for(int i = 0; i < n; i ++) cin >> a[i];
		int low = 0, high = n - 1, i = 1;
		while(low <= high){
			if(i & 1) cout << a[low ++] << ' ';
			else cout << a[high --] << ' ';
			i ++;
		}
		cout << endl;
	}
	return 0;
}
