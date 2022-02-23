#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int n;
	map<int, string> mp;
	mp[0] = "December";
	mp[1] = "January";
	mp[2] = "February";
	mp[3] = "March";
	mp[4] = "April";
	mp[5] = "May";
	mp[6] = "June";
	mp[7] = "July";
	mp[8] = "August";
	mp[9] = "September";
	mp[10] = "October";
	mp[11] = "November";
	map<int, string>::iterator it;
	while(cin >> s >> n) {
		for(it = mp.begin(); it != mp.end(); ++ it) {
			if(s == (*it).second) cout << mp[((*it).first + n) % 12] << endl;
		}
	}
	return 0;
}
