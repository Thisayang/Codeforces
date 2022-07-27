#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a = n / 3, b = n / 3 + 1, c = n / 3 - 1;
		if (n % 3 > 0) b ++;
		if (n % 3 > 1) a ++;
		cout << a << " " << b << " " << c << endl; 
	}
	return 0;
}