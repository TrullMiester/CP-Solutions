#include <bits/stdc++.h>
using namespace std;

int main() {
	double d;
	cin >> d;
	int p = 0;
	for (int i=0;i<d;i++) {
		int a;
		cin >> a;
		p += a;
	}
	double ans = 0;
    ans += p / d;
	cout << setprecision(12);
	cout << ans;
	return 0;
}
