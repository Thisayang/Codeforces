#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		if(int(sqrt(n)) * int(sqrt(n)) == n) cout << int(sqrt(n)) << endl;
		else cout << int(sqrt(n)) + 1 << endl;
	}
	return 0;
}



