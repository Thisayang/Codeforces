#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int n;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> s >> n;
	if (s == "front") {
		if (n == 1) cout << "L" << endl;
		else cout << "R" << endl;
	} else {
		if (n == 1) cout << "R" << endl;
		else cout << "L" << endl;
	}
	return 0;
}