#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b,d;
	cin >> n >> b >> d;
	int c=0,j=0;
	for (int i=0;i<n;i++) {
		int s;
		cin >> s;
		if (s > b) {
			continue;
		} else {
			j += s;
			if (j > d) {
				j = 0;
				c++;
			}
		}
	}
	cout << c;
	return 0;
}
