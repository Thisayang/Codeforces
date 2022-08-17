#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	FOR(i, 0, n) {
		if (i % 4 == 0) cout << "a";
		else if (i % 4 == 1) cout << "b";
		else if (i % 4 == 2) cout << "c";
		else  cout << "d";
	}
	cout << endl;
	return 0;
}