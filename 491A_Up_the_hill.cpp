#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
	cin >> a >> b;
	int sum = a + b + 1;
	if (a == 0) {
		for (int i = b; i >= 0; -- i) {
			cout << i + 1 << " ";
		}
	} else if (b == 0) {
		for (int i = 0; i <= a; ++ i) {
			cout << i + 1 << " ";
		}
	} else {
		for (int i = b; i < sum; ++ i) {
			cout << i + 1 << " ";
		}
		for (int i = b - 1; i >= 0; -- i) {
			cout << i + 1 << " ";
		}
	}
	cout << endl;
	return 0;
}