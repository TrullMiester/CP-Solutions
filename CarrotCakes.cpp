#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int r = (d + t) / t;
	if (r * k < n) {
		cout << "YES";
	}	else {
			cout << "NO";
	}
	return 0;
}
