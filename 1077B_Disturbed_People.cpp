#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, a[101] = {0}, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i ++) cin >> a[i];
	for(int i = 1; i < n - 1; i ++) {
		if(a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1) {
			sum ++;
			a[i + 1] = 0;
		}
	}
	cout << sum << endl;
	return 0;
}
