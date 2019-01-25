#include <bits/stdc++.h>
using namespace std;

const int N = 15;

int cn[N];

void add(int x) {
	for(;x;x/=10) cn[x%10]++;
}

int chk(int a, int b, int c) {
	memset(cn,  0, sizeof(cn));
	add(a), add(b), add(c);
	for(int i=1;i<=9;i++) if(cn[i]!=1) return 0;
	return 1;
}

int main() {
	int ans = 0;
	for(int i=100;i<=1000/3;i++) if(chk(i, i*2, i*3)) {
		cout << i << " " << i*2 << " " << i*3 <<endl;
	}
	return 0;
}