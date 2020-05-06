#include <bits/stdc++.h>
using namespace std;

int main() {
	int d;
	cin >> d;
	int lc = 0, lo = 0, rc = 0, ro = 0;
	for (int i=0;i<d;i++){
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			lo += 1;
		} else {
			lc += 1;
		}
		if (b == 1) {
			ro += 1;
		} else {
			rc += 1;
		}
	}
	int ans = 0;
	if (lc > lo) {
		ans += lo;
	} else {
		ans += lc;
	}
	if (rc > ro) {
		ans += ro;
	} else { 
		ans += rc;
	}
	cout << ans;
	return 0;
}
