#include <bits/stdc++.h>
#define ll long long int
int exp(int n) {
	if (n == 0) return 1;
	else if (n % 2 == 0) return exp(n / 2) * exp(n / 2);
	else return exp(n - 1) * 2;
}
int beautiful(int n) {
	return (exp(n) - 1) * exp(n - 1);
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 9; i > 0; -- i) {
		int tmp = beautiful(i);
		if (n % tmp == 0) {
			cout << tmp << endl;
			break;
		}
	}
	return 0;
}