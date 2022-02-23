#include <bits\stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int len = s.length();
	int x = 0, y = 0;
	for(int i = 0; i < len; i ++) {
		if(s[i] == '0') x ++;
		else y ++;
	}
	cout << abs(x - y);
	return 0;
}
