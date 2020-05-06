#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long m;
	cin >> n >> m;
	int d = 0;
   long long q = 0;
	for (int i=0;i<n;i++){ 
		string a;
		long long x;
		cin >> a >> x;
		if (a[0] == '+') {
			m += x;
		} else {
			if (m - x < 0) {
				d++;
			} else {
				m -= x;
			}
		}
	}
	cout << m << " " << d;
	return 0;
}
