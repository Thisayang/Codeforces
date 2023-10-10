#include <bits/stdc++.h>
#define MAX (1e5 + 10)
using namespace std;

int Solve(int n)
{
	int ans = MAX;
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		ans = min(ans, abs(tmp));
	}
	return ans;
}

int main(void)
{
	int n;
	cin >> n;
	cout << Solve(n) << endl;
	return 0;
}