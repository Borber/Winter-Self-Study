#include<iostream>
using namespace std;
int main() {
	double s = 0;
	int n = 0, k;
	cin >> k;
	while(s <= k) {
		s += 1.0 / ++n;
	}
	cout << n;
	return 0;
}