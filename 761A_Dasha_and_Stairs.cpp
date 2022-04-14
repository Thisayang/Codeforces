#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	cin >> a >> b;
	if (abs(a - b) < 2 && a + b != 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}