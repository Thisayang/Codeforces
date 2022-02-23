#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	while(cin >> n) {
		if(n == 0) cout << 1 << endl;
		else if(n % 4 == 0) cout << 6 << endl;
		else if(n % 4 == 1) cout << 8 << endl;
		else if(n % 4 == 2) cout << 4 << endl;
		else if(n % 4 == 3) cout << 2 << endl;
	}
	return 0;
}
