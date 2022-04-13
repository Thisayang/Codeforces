#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	int tmp = 0;
	if (b < 0) {
		b *= -1;
		b %= n;
		b = n - b;
	}
	tmp = (a + b) % n;
	cout << (tmp == 0 ? n : tmp) << endl;
	return 0;
}