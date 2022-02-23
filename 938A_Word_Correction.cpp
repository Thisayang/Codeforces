#include <bits\stdc++.h>
#define LL long long
using namespace std;
bool check(char s)
{
    if(s == 'a' || s == 'e' || s == 'o' || s == 'i' || s == 'u' || s == 'y')
        return true;
    return false;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	cin >> n >> s;
	cout << s[0];
	for(int pre = 0, i = 1; i < n; ++ i) {
		if(check(s[i]) && check(s[pre])) continue;
		pre = i;
		cout << s[i];
	}
	return 0;
}
