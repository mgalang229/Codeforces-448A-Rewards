#include <bits/stdc++.h>

using namespace std;

void decode() {
	int a[3], b[3], n;
	int c = 0, m = 0;
	for(int i = 0; i < 3; ++i) {
		cin >> a[i];
		c += a[i];
	}
	for(int i = 0; i < 3; ++i) {
		cin >> b[i];
		m += b[i];
	}
	cin.ignore();
	cin >> n;
	int cups = (c + 5 - 1) / 5;
	int medals = (m + 10 - 1) / 10;
	if(cups + medals > n) cout << "NO";
	else cout << "YES";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
