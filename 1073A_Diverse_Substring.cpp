#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n - 1; ++ i) {
		if (s[i] != s[i + 1]) {
			cout << "YES" << endl;
			cout << s[i] << s[i + 1] << endl;
			goto loop;
		}
	}
	cout << "NO" << endl;
	loop: ;
	return 0;
}