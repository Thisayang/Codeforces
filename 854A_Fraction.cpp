#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	if(n & 1) cout << n / 2 << ' ' << n / 2 + 1;
	else {
		if(n / 2 % 2 == 1) cout << n / 2 - 2 << ' ' << n / 2 + 2;		
		else cout << n / 2 - 1 << ' ' << n / 2 + 1;
	}
	return 0;
}
