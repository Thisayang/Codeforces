#include <bits/stdc++.h>

using namespace std;

int Solve(long long n)
{
	for (long long i = 2; i <= n + 1; ++i) {
		if (n % i != 0) {
			return  i - 1;
		}
	}
	return 1;
}

int main(void)
{
	int t;
	long long n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
}