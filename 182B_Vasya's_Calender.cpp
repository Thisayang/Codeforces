#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int d, n, a[2010], sum = 0;
	cin >> d >> n;
	for (int i = 0; i < n - 1; ++ i) {
		cin >> a[i];
		sum += d - a[i];
	}
	cout << sum << endl;
	return 0;
}