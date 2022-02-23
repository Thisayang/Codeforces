#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t --) {
		string s;
		cin >> s;
		if(*(s.end() - 1) == 'o') cout << "FILIPINO" << endl;
		else if(*(s.end() - 1) == 'u') cout << "JAPANESE" << endl;
		else if(*(s.end() - 1) == 'a') cout << "KOREAN" << endl;
	}
	return 0;
}
