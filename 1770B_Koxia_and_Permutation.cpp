#include <bits/stdc++.h>

using namespace std;

void Solve(int n, int k)
{
	int i, j;
	for (i = 1, j = n; i < j; ++i, --j)
		cout << j << " " << i << " ";
	if(i == j)
		cout << i;
	return ;
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Solve(n, k);
		cout << endl;
	}
	return 0;
}