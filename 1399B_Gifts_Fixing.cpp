#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
	int n, a[60];
	long long sum = 0;
		cin >> n;
		int x[2][60] = {0};
		for(int j = 0; j < 2; j ++) {
		int min = 1000000001;
			for(int i = 0; i < n; i ++) {
				cin >> a[i];
				if(min > a[i]) min = a[i];
			}
			for(int i = 0; i < n; i ++) x[j][i] = a[i] - min;
		}
		for(int i = 0; i < n; i ++) sum += x[0][i] > x[1][i] ? x[0][i] : x[1][i];
		cout << sum << endl;
	}
	return 0;
}