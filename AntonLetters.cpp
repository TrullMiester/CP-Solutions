#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	set<char> a;
	getline(cin, s);	
	int l = s.length();
	for (int i=1;i<l;i++){
		if (isalpha(s[i])) {
			a.insert(s[i]);
		}	
	}
	cout << a.size();
	return 0;
}
