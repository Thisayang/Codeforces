#include <bits/stdc++.h>

using namespace std;

void Solve()
{
	long long n;
	long long k;
	scanf("%lld%lld", &n, &k);
	for (long long i = 0; i < 3; ++i) {
		if (n - i * k >= 0 && (n - i * k) % 2 == 0) {
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
	return;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		Solve();
	}
	return 0;
}