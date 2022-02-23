#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, t, x[5000] = {0}, y[5000] = {0}, z[5000] = {0}, num[3];
	cin >> t;
	for(int i = 1; i <= t; i ++) {
		cin >> n;
		if(n == 1) x[num[0] ++] = i;
		else if(n == 2) y[num[1] ++] = i;
		else z[num[2] ++] = i;
	}
	sort(num, num + 3);
	cout << num[0] <<endl;
	for(int i = 0; i < num[0]; i ++) cout << x[i] << ' ' << y[i] << ' ' << z[i] << endl;
	return 0;
}