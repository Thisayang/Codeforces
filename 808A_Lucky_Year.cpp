#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n)  {
		int tmp = 1;
		while(n / tmp >= 10) tmp *= 10;
		cout << (tmp - n % tmp) << endl;
	}
	return 0;
}
