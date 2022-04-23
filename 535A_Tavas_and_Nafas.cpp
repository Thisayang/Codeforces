#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s[] = {"zero", "one", "two", "three", "four", "five", "six",
		"seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
		"fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	string t[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy",
		"eighty", "ninety"};
	cin >> n;
	if (n < 20) cout << s[n] << endl;
	else if (n >= 20 && n % 10 == 0) cout << t[n / 10 - 2] << endl;
	else cout << t[n / 10 - 2] << "-" << s[n % 10] << endl;
	return 0;
}