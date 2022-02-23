#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	//ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s1, s2, s3;
	bool flg = true;
	int cnt = 0;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	for(auto i : s1)
		if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt ++;
	if(cnt != 5) flg = false;
	cnt = 0;
	for(auto i : s2)
		if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt ++;
	if(cnt != 7) flg = false;
	cnt = 0;
	for(auto i : s3)
		if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') cnt ++;
	if(cnt != 5) flg = false;
	if(flg) cout << "YES";
	else cout << "NO";
	return 0;
}
