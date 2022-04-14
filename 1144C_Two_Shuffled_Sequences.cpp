#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, tmp;
	cin >> n;
	int flg = 0;
	set<int> inc, dec;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		if (inc.find(tmp) == inc.end()) inc.insert(tmp);
		else if (dec.find(tmp) == dec.end()) dec.insert(tmp);
		else flg = 1;
	}
	if (flg == 1) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << inc.size() << endl;
		for (auto it = inc.begin(); it != inc.end(); ++ it) {
			cout << *it << " ";
		}
		cout << endl << dec.size() << endl;
		for (auto it = dec.rbegin(); it != dec.rend(); ++ it) {
			cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}