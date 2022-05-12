#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	int cnt = 0;
	cin >> s;
	for (int i = 0; s[i] != 0; ++ i) {
		if (s[i] == '<' && s[i + 1] != '/') {
			for (int j = 0; j < cnt; ++ j) {
				cout << "  ";
			}
			for (int j = i; s[j] != 0; ++ j) {
				cout << s[j];
				if (s[j] == '>') {
					cout << endl;
					break;
				}
			}
			cnt ++;
		} else if (s[i] == '<' && s[i + 1] == '/') {
			cnt --;
			for (int j = 0; j < cnt; ++ j) {
				cout << "  ";
			}
			for (int j = i; s[j] != 0; ++ j) {
				cout << s[j];
				if (s[j] == '>') {
					cout << endl;
					break;
				}
			}
		}
	}
	return 0;
}