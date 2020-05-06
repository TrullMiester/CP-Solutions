#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int h[n];
	int a[n];
	for(int i=0;i<n;i++){
		cin >> h[i] >> a[i];
	}
	int c=0;
	for (int i=0;i<n;i++) {
		for (int b=0;b<n;b++) {
			if(h[i] == a[b]) {
				c++;
			}
		}
	}
	cout << c << "\n";
	return 0;
}
