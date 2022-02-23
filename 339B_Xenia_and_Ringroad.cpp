#include <bits\stdc++.h>
using namespace std;
int main() {
	long long n, m, x, tmp = 1, sum = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i ++) {
		cin >> x;
		if(tmp > x) sum += n - tmp + x;
		else sum += x - tmp;
		tmp = x;
	}
	cout << sum;
	return 0;
}
