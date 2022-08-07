#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int x, y;
	cin >> x >> y;
	if (x * log(y) == y * log(x)) cout << "=" << endl;
	else if (x * log(y) > y * log(x)) cout << "<" << endl;
	else cout << ">" << endl;
	return 0;
}