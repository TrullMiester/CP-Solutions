#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x[4]{a, b, c, d};
	int dup = 0;
	int s = sizeof(x) / sizeof(1);
	sort(x, x + s);
	for (int i=0;i<3;i++){
		if (x[i] == x[i + 1]) {
			dup += 1;
		}
	}
	cout << dup;
	return 0;
}
