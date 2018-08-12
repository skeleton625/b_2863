#include <iostream>
using namespace std;

double n[4], m;
int t, c;

int main() {
	for (int i = 0; i < 4; i+=2) cin >> n[i] >> n[i + 1];
	for (int i = 3; i >= 0; i--) {
		t = n[0];
		n[0] = n[1];
		n[1] = n[3];
		n[3] = n[2];
		n[2] = t;
		if (m <= (n[0] / n[2]) + (n[1] / n[3])) {
			m = (n[0] / n[2]) + (n[1] / n[3]);
			c = i;
		}
	}
	cout << c;
	return 0;
}