#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while(t --) {
		cin >> n;
		if (n <= 1399) cout << "Division 4" << endl;
		else if (n <= 1599) cout << "Division 3" << endl;
		else if (n <= 1899) cout << "Division 2" << endl;
		else cout << "Division 1" << endl;
	}
	return 0;
}