#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, ans = 0;
	cin >> n >> x;
	if (n % 6 == 1 && x == 1) ans = 0;
	else if (n % 6 == 2 && x == 2) ans = 0;
	else if (n % 6 == 3 && x == 2) ans = 0;
	else if (n % 6 == 4 && x == 1) ans = 0;
	else if (n % 6 == 5 && x == 0) ans = 0;
	else if (n % 6 == 0 && x == 0) ans = 0;
	else if (n % 6 == 1 && x == 0) ans = 1;
	else if (n % 6 == 2 && x == 0) ans = 1;
	else if (n % 6 == 3 && x == 1) ans = 1;
	else if (n % 6 == 4 && x == 2) ans = 1;
	else if (n % 6 == 5 && x == 2) ans = 1;
	else if (n % 6 == 0 && x == 1) ans = 1;
	else if (n % 6 == 1 && x == 2) ans = 2;
	else if (n % 6 == 2 && x == 1) ans = 2;
	else if (n % 6 == 3 && x == 0) ans = 2;
	else if (n % 6 == 4 && x == 0) ans = 2;
	else if (n % 6 == 5 && x == 1) ans = 2;
	else if (n % 6 == 0 && x == 2) ans = 2;
	cout << ans << endl;
	return 0;
}