#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int sum = n;
	while (n != 1) {
		int flg = 0;
		for (int i = 2; i <= sqrt(n); ++ i) {
			if (n % i == 0) {
				sum += n / i;
				n = n / i;
				flg = 1;
				break;
			}
		}
		if (flg == 0) n = 1;
	}
	cout << sum + 1 << endl;
	return 0;
}