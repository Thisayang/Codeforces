#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	if (n > 4) {
		printf("Alice\n");
	} else {
		printf("Bob\n");
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