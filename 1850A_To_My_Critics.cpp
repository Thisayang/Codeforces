#include <bits/stdc++.h>

using namespace std;

const char* Solve(int a, int b, int c)
{
	if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
		return "YES";
	}
	return "NO";
}

int main(void)
{
	int t;
	int a;
	int b;
	int c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
        cout << Solve(a, b, c) << endl;
	}
	return 0;
}