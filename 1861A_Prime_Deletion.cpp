#include <bits/stdc++.h>

using namespace std;

int Solve(const string s)
{
	int flg1;
	int flg2;
    for (int i = 0; i < 9; ++i) {
		if (s[i] == '1') {
			flg1 = i;
		} else if (s[i] == '3') {
			flg2 = i;
		}
	}
	if (flg1 > flg2)
		return 31;
	return 13;
}

int main(void)
{
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << Solve(s) << endl;
    }
    return 0;
}