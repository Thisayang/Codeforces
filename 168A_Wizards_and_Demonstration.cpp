#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, y, z;
	while(cin >> n >> x >> y) {
		for(z = x; z * 100 / n < y; ) z ++; 
		cout << max(z - x, 0) << endl;
	}
	return 0;
}
