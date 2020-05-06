#include <bits/stdc++.h>
using namespace std;

 int main() {
	 string s1;
	 string s2;
	 cin >> s1 >> s2;
	 int l=s2.length(), i=0;
	 for (int a=0;a<l;a++){
	 	if (s1[i] == s2[a]) {
			i++;
		}
	 }
	 cout << i + 1;
	 return 0;
 }
