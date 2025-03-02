#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	if (n < 29) {
		cout << "aa" << (char)(n - 3 + 'a') << endl;
	} else if (n < 53) {
		cout << 'a' << (char)(n - 28 + 'a') << 'z' <<endl;
	} else {
		cout << (char)(n - 53 + 'a') << "zz" << endl;
	}
	return ;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}