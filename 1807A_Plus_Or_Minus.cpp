#include <bits/stdc++.h>

using namespace std;

void Solve(void)
{
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b == c) {
		printf("+\n");
	} else {
		printf("-\n");
	}
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}