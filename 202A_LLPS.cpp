#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, str = "abcdefghijklmnopqrstuvwxyz";;
	int a[26] = {0};
	cin >> s;
	for(auto w : s) a[w - 'a'] ++;
	for(int i = 25; i > -1; -- i)
		if(a[i] != 0) {
			while(a[i] --) cout << str[i];
			break;
		}
	return 0;
}
