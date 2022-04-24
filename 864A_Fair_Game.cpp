#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp;
	cin >> n;
	set<int> sett;
	map<int, int> m;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		sett.insert(tmp);
		m[tmp] ++;
	}
	if (sett.size() == 2 && m[*sett.begin()] == m[*sett.rbegin()]) {
		cout << "YES" << endl;
		cout << *sett.begin() << " " << *sett.rbegin() << endl;
	} else cout << "NO" << endl;
	return 0;
}