#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, h;
	cin >> a >> b;
	if (a >= b) {
		h = a;
	}
	else {
		h = b;
	}
	if (h == 6) {
		cout << "1/6";
	}
	else if (h == 5) {
		cout << "1/3";
	}
	else if (h == 4) {
		cout << "1/2";
	}
	else if (h == 3) {
		cout << "2/3";
	}
	else if (h == 2) {
		cout << "5/6";
	}
	else if (h == 1) {
		cout << "1/1";
	}
	return 0;
}
