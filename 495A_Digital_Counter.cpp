#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int a[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
	cin >> s;
	cout << a[s[0] - '0'] * a[s[1] - '0'] << endl;
	return 0;
}