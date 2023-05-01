#include <bits/stdc++.h>

using namespace std;

int comp(const void* pa, const void* pb)
{
	return *(int*)pa - *(int*)pb;
}

void Solve(int n)
{
	long long a[n];
	for (int i = 0; i < n; ++i) {
		scanf("%lld", &a[i]);
	}
	qsort(a, n, sizeof(long long), comp);
	if (a[0] * a[1] > a[n - 1] * a[n - 2]) {
		cout << a[0] * a[1] << endl;
	} else {
		cout << a[n - 1] * a[n - 2] << endl;
	}
	return;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}