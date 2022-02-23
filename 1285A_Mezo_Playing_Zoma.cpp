#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, a[2] = {0};
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i ++) {
		if(s[i] == 'L') a[0] ++;
		else a[1] ++;
	}
	cout << a[0] + a[1] + 1;
	return 0;
}
