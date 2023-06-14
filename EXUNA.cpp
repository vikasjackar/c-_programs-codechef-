#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long t, n, a;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long mi = 1e10;
	    while (n--) {
	        cin >> a;
	        mi = min(mi, a);
	    }
	    cout << mi << '\n';
	}
	return 0;
}