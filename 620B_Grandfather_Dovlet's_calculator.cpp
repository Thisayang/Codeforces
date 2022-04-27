#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, s[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++ i) {
		int n = i;
		while (n > 0) {
			sum += s[n % 10];
			n /= 10;
		}
	}
	cout << sum << endl;
	return 0;
}