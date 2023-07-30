#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int m[n];
	char ch[n][2];
	int minx = -1;
	int miny = -1;
	int min0 = 4e5 + 10;
	int min1 = 4e5 + 10;
	int ans = 4e5 + 10;
	for (int i = 0; i < n; ++i) {
		scanf("%d %s", &m[i], ch[i]);
		if (ch[i][0] == ch[i][1] && ch[i][0] == '1') {
			ans = ans < m[i] ? ans : m[i];
			minx = i;
			miny = i;
			continue;
		}
		if (ch[i][0] == '1') {
			min0 = min0 < m[i] ? min0 : m[i];
			minx = i;
		} else if (ch[i][1] == '1') {
			min1 = min1 < m[i] ? min1 : m[i];
			miny = i;
		}
	}
	if (minx == -1 || miny == -1) {
		printf("-1\n");
	} else {
		printf("%d\n", ans < min0 + min1 ? ans : min0 + min1);
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