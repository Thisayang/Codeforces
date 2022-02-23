#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b;
	while(cin >> n >> a >> b) {
		if(n - a > b + 1) cout << b + 1 << endl;
		else cout << n - a << endl;
	}
	return 0;
}
