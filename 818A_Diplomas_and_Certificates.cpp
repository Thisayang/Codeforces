#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	LL n, k, num = 0;
	bool flg = 1;
	cin >> n >> k;
	LL a = n / 2 / (k + 1), b = a * k;
	cout << a << ' ' << b << ' ' << n - a - b;
	return 0;
}
