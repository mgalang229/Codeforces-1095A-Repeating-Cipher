#include <bits/stdc++.h>

using namespace std;

void decode() {
	char a[55];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		cout << a[i];
		i += cnt;
		cnt++;
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);	
	cin.tie(0);
	decode();
	return 0;
}
