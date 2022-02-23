#include <bits\stdc++.h>
#define maxn 200010
long long a[maxn], b[maxn];
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		long long n, k;
		long long max1, max2;
		cin >> n >> k;
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			if(i == 0) max1 = a[i];
			else max1 = max1 > a[i] ? max1 : a[i];
		} 
		for(int i = 0; i < n; i ++) {
			a[i] = max1 - a[i];
			if(i == 0) max2 = a[i];
			else max2 = max2 > a[i] ? max2 : a[i];
		}
		for(int i = 0; i < n; i ++) b[i] = max2 - a[i];
		if(k & 1){
			for(int i = 0; i < n; i ++) cout << a[i] << ' ';
		} else {
			for(int i = 0; i < n; i ++) cout << b[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
