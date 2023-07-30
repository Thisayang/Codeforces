#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int tmp;
	int odd = 0;
	int min = 1e9 + 10;
	int minx = 1e9 + 10;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &tmp);
		if (tmp & 1) {
			odd++;
			min = min < tmp ? min : tmp;
			continue;
		}
		minx = minx < tmp ? minx : tmp;
	}
	if (odd == 0 || odd == n || min < minx) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return ;
}

int main()
{
	int t;
	int n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		Solve(n);
	}
	return 0;
}