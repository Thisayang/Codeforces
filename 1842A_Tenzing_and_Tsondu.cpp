#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
	int tmp;
	long long sum1 = 0;
	long long sum2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		sum1 += tmp;
	}
	for (int i = 0; i < m; ++i)
    {
		cin >> tmp;
		sum2 += tmp;
	}
	if (sum1 == sum2) {
		cout << "Draw" << endl;
	} else if (sum1 > sum2) {
		cout << "Tsondu" << endl;
	} else {
		cout << "Tenzing" << endl;
	}
	return 0;
}

int main()
{
	int t;
	int m;
	int n;
	cin >> t;
	while (t--) {
		cin >> n >> m;
        Solve(n, m);
    }
    return 0;
}