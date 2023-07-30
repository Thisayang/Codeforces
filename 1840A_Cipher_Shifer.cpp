#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	char ch[n];
	scanf("%s", ch);
	int flg = 0;
	for (int i = flg + 1; i < n; ++i) {
		if (ch[i] == ch[flg]) {
			printf("%c", ch[flg]);
			flg = i + 1;
			i = flg;
		}
	}
	printf("\n");
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