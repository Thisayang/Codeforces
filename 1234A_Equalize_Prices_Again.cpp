#include <bits\stdc++.h>
using namespace std;
int main() {
	int q, n, a[101], sum;
	cin >> q;
	while(q --) {
		cin >> n;
		sum = 0;
		for(int i = 0; i < n; i ++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum % n == 0) cout << sum / n << endl;
		else cout << sum / n + 1 << endl;
	}
	return 0;
}
