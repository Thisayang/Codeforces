#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, i, cnt = 0;
	cin >> n;
	if (n < 10) cout << n << endl;
	else {
		for (i = 1; n > 0; ++ i) {
			if (i < 10) n --;
			else if (i < 100) n -= 2;
			else if (i < 1000) n -= 3;
			else n -= 4;
			if (n <= 0) break;
		}
		if (n == 0) cout << i % 10 << endl;
		else {
			while (n < 0) {
				i /= 10;
				n ++;
			}
			cout << i % 10 <<endl;
		}
	}
	return 0;
}