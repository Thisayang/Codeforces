#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int a[n];
	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			cnt++;
		} else {
			ans = ans > cnt ? ans : cnt;
			cnt = 0;
		}
	}
	ans = ans > cnt ? ans : cnt;
	printf("%d\n", ans);
	return ;
}

int main()
{
	int t;
	int n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		Solve(n);
	}
	return 0;
}