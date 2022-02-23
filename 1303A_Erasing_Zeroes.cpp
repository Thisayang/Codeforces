#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		string s;
		cin >> s;
		int len = s.length();
		int min = 0, max = 0, ok = 0, cnt = 0;
		for(int i = 0; i < len; i ++) {
			if(s[i] == '1' && ok == 0) {
				max = min = i;
				ok = 1;
			}
			else if(s[i] == '1') max = i;
		}
		for(int i = min; i < max; i ++)
			if(s[i] == '0') cnt ++;
		cout << cnt << endl;
	}
	return 0;
}
