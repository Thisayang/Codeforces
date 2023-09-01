#include <bits/stdc++.h>
#define MAX 1000000007LL
using namespace std;

long long Solve(long long n)
{
	long long ans = 1;
	for (long long i = 1; i <= n; ++i) {
		ans = ans * i % MAX;
	}
	return ans * ((n - 1) * n % MAX) % MAX;
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
	return 0;
}