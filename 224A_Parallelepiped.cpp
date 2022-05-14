#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	int ans = sqrt(a * b /c) * 4;
	ans += sqrt(a * c / b) * 4;
	ans += sqrt(b * c / a) * 4;
	cout << ans << endl;
	return 0;
}