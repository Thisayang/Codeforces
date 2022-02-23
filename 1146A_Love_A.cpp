#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	cin >> s;
	int ok = 0;
	for(auto a = s.begin(); a != s.end(); a ++)
		if(*a == 'a') ok ++;
	if(2 * ok - 1 >= s.length()) cout << s.length();
	else cout << 2 * ok - 1;
	return 0;
}
