#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	assert(1 <= T && T <= 100);
	cin.ignore();
	int n, a[100];
	while(T--) {
		string tmp;
		getline(cin, tmp);
		stringstream ss(tmp);
		n = 0;
		while(ss >> a[n++]);
		n -= 2;
		assert(n <= 50);
		bool ok = false;
		int ans = 0;
		for(int i = 0; i < n + 1; ++i) {
			if(a[i] == n) {
				if(ok) {
					ans = max(ans, a[i]);
				}
				else {
					ok = true;
				}
			}
			else {
				ans = max(ans, a[i]);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
