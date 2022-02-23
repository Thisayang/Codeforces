#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	string str;
	cin >> t;
	while(t --) {
		cin >> str;
		int x = 0, y = 0;
		int len = str.length();
		for(int i = 0; i < len; i ++) {
			if(str[i] == '0') x ++;
			else y ++;
		}
		int min = x < y ? x : y;
		if(min % 2 == 1) cout << "DA" << endl;
		else cout << "NET" << endl;
	}
	return 0;
}
