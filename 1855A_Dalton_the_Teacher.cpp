#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int ans = 0;
	int tmp;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
		if (i == tmp) {
			ans++;
		}
    }
    return (ans + 1) / 2;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
        cout << Solve(n) << endl;
	}
	return 0;
}