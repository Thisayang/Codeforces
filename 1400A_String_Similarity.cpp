#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		string s;
		int n;
		cin >> n >> s;
		for(int i = 0; i < s.length(); i += 2) cout << s[i];
		cout << endl;
	}
	return 0;
}
