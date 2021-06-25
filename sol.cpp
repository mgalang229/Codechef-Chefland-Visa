#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x1, x2, y1, y2, z1, z2;
		cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
		// verify if: x1 >= x2 and y2 >= y1 and z2 <= z1 
		if (x2 >= x1 && y2 >= y1 && z2 <= z1) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << '\n';
	}
	return 0;
}
