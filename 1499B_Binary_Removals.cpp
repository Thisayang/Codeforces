#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    string s;
    cin >> t;
    while(t --) {
        cin >> s;
        int i = s.find("11");
        int j = s.rfind("00");
        cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
    }
	return 0;
}
