#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		LL n, i = 1;
		cin >> n;
		cout << n;
		while(i < n) cout << ' ' << i ++;
		cout << endl;
	}
	return 0;
}
