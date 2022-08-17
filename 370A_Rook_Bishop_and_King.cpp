#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int r1, c1, r2, c2, a, b, c;
	cin >> r1 >> c1 >> r2 >> c2;
	if (r1 == r2 || c1 == c2) a = 1;
	else a = 2;
	if (abs(r1 - r2) == abs(c1 - c2)) b = 1;
	else if (((r1 + c1) & 1) != ((r2 + c2) & 1)) b = 0;
	else b = 2;
	if (r1 == r2) c = abs(c1 - c2);
	else if (c1 == c2) c = abs(r1 - r2);
	else if (abs(r1 - r2) == abs(c1 - c2)) c = abs(c1 - c2);
	else c = max(abs(r1 - r2), abs(c1 - c2));
	cout << a << " " << b  << " " << c << endl;
	return 0;
}