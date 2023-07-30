#include <bits/stdc++.h>
#define MAX_LEN 30
using namespace std;

void Solve(int n)
{	
	int a[MAX_LEN][MAX_LEN] = {0};
	char ch[n + 1];
	int cnt = 0;
	scanf("%s", ch);
	for (int i = 0; i < n - 1; ++i) {
		if (a[ch[i] - 'a'][ch[i + 1] - 'a'] == 0) {
			cnt ++;
			a[ch[i] - 'a'][ch[i + 1] - 'a'] = 1;
		}
	}
	printf("%d\n", cnt);
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