#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	if (a - c + b >= n || c > a || c > b) cout << "-1" << endl;
	else cout << n - a + c - b << endl;
	return 0;
}