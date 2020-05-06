#include <bits/stdc++.h>
using namespace std;

int main() {
	int m;
	cin >> m;
	int x[m+2];
	for (int i=1;i<=m;i++) {
		cin >> x[i];
	}
	int c;
	cin >> c;
	for(int i=0;i<c;i++) {
		int a,b;
		cin >> a >> b;
		x[a+1] += x[a] - b;
		x[a-1] += b - 1;
		x[a] = 0;
		
	}
	for (int i=1;i<=m;i++) {
		cout << x[i] << "\n";
	}
	return 0;
}
