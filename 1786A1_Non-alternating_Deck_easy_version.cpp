#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	int i = 1;
	int a = 0;
	int b = 0;
	while (n > 0) {
		if (i % 4 < 2) {
			a += (i > n ? n : i);
		} else {
			b += (i > n ? n : i); 
		}
		n -= i;
		++i;
	}
	cout << a << " " << b << endl;
	return;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
}