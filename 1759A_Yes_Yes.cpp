#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
const int E_INDEX = 1;
const int S_INDEX = 2;
using namespace std;

bool IsYes(const string& s, int i, int j)
{
    int size = 3;
    if (j % size == 0 && s[i + j] == 'Y') {
        return true;
    } else if (j % size == E_INDEX && s[i + j] == 'e') {
        return true;
    } else if (j % size == S_INDEX && s[i + j] == 's') {
        return true;
    }
    return false;
}
bool Start(const string& s, int i)
{
    for (int j = 0; i + j < s.length(); ++j) {
        if (!IsYes(s, i, j)) {
            return false;
        }
    }
    return true;
}
 
bool Ans(const string& s)
{   
    if (s.length() == 1 && s[0] == 'e') {
        return true;
    }
    int i = 0;
    if (s[0] == 'e' && s[1] == 's') {
        i = S_INDEX;
    } else if (s[0] == 's') {
        i = E_INDEX;
    }
    return Start(s, i);
}
 
void Solve(void)
{
    string s;
    cin >> s;
    bool flg = Ans(s);
    if (flg) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return ;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}