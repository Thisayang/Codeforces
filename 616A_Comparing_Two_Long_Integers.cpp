#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string a, b;
	while(cin >> a >> b) {
		int la = a.length(), lb = b.length(), i, j, flg = 0;
		for(i = 0; i < la; ++ i) 
			if(a[i] != '0') break;

		for(j = 0; j < lb; ++ j) 
			if(b[j] != '0') break;
		if(la - i > lb - j) cout << ">" << endl;
		else if(la - i < lb - j) cout << "<" << endl;
		else {
			for(i, j; i < la; ++ i, ++ j) {
				if(a[i] > b[j]) {
					cout << ">" << endl;
					flg = 1;
					break;
				} else if(a[i] < b[j]) {
					cout << "<" << endl;
					flg = 1;
					break;
				}
			}
			if(flg == 0) cout << "=" << endl;	
		}
	}
	return 0;
}
