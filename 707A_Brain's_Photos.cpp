#include <bits\stdc++.h>
using namespace std;
int main() {
	int a, b, c[100] = {0};
	char ch;
	cin >> a >> b;
	for(int i = 0; i < a; i ++) {
		for(int j = 0; j < b; j ++) {
			cin >> ch;
			c[ch] ++;
		}
	}
if(c['C'] == 0 && c['M'] == 0 && c['Y'] == 0) cout << "#Black&White" << endl;
else cout << "#Color" << endl;
	return 0; 
}