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
	set<int> sett;
	while (sett.find(n) == sett.end()) {
		sett.insert(n);
		int tmp = n + 1;
		while (tmp % 10 == 0) {
			tmp /= 10;
		}
		n = tmp;
	}
	cout << sett.size() << endl;
	return 0;
}