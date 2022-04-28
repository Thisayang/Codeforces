#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k;
	set<int> sett;
	cin >> k;
	for (int i = 1; k >= i; ++ i) {
		if (k - i == i) {
			sett.insert(k);
			break;
		} else if (sett.find(k - i) == sett.end()) {
			sett.insert(i);
			k -= i;
		} else {
			sett.insert(k);
		}
	}
	cout << sett.size() << endl;
	for (auto it = sett.begin(); it != sett.end(); ++ it) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}