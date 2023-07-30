#include <bits/stdc++.h>

using namespace std;

int Solve(long long n)
{
	long long sum = 0;
	while (n > 0) {
		sum += n;
		n >>= 1;
	}
	cout << sum << endl;
	return 0;
}

int main()
{
	int t;
	long long n;
	cin >> t;
    while (t--)
    {
        cin >> n;
        Solve(n);
	}
}