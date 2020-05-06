#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (s.length() > 10) {
			int l = s.length();
			int mid = s.length() - 2;
			cout << s[0] << mid << s[l-1] << "\n";
		} else {
			cout << s << "\n";
		}
	}
	return 0;
}
