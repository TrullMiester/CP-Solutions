#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h=0,l=0,a=0;
	cin >> n;
	int x;
	cin >> x;
	h = x;
	l = x;
	for (int i=1;i<n;i++) {
		int w;
		cin >> w;
		if (w < l) {
			l = w;
			a += 1;
		} else if (w > h) {
			h = w;
			a += 1;
		}
	}
	cout << a;
	return 0;
}
