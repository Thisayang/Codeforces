#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, ok = 0, flg = 0;
	string s;
	cin >> n >> s;
	for(int i = 0; i < n; i ++) {
		if(s[i] == 'n') ok ++;
		else if(s[i] == 'z') flg ++;
	}
	while(ok --) cout << "1 ";
	while(flg --) cout << "0 ";
	return 0;
}
