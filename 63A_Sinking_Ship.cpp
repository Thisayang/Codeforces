#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s, c;
	queue<string> r, wc, m, cp;
	while(cin >> n) {
		while(n --) {
			cin >> s >> c;
			if(c == "rat") r.push(s);
			else if(c == "woman" || c == "child") wc.push(s);
			else if(c == "man") m.push(s);
			else cp.push(s);
		}
		while(!r.empty()) {
			cout << r.front() << endl;
			r.pop();
		}
		while(!wc.empty()) {
			cout << wc.front() << endl;
			wc.pop();
		}
		while(!m.empty()) {
			cout << m.front() << endl;
			m.pop();
		}
		while(!cp.empty()) {
			cout << cp.front() << endl;
			cp.pop();
		}
	}
	return 0;
}
