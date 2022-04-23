#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp;
	set<int> sett;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		sett.insert(tmp);
	}
	int sum = 0;
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		if (*it <= n) sum ++;
	}
	cout << n - sum << endl;
	return 0;
}