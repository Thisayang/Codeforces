#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b, c;
	cin >> t;
	while (t --) {
		cin >> a >> b >> c;
		cout << a + b + c << " " << b + c << " " << c << endl;
 	}
	return 0;
}