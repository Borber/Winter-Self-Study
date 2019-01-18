#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e5+50;
const int bs = 9;
const ll bsm = 1e9;


string aa,bb;
ll a[N],b[N],c[N];

void strToInt(string &s, ll t[]) {
	int l=s.length();t[0]=0;
	for(int i=l-1;i>=0;i-=bs) {
		ll tmp=0;
		for(int j=max(0,i-bs+1);j<=i;j++) tmp=tmp*10+s[j]-'0';
		t[++t[0]]=tmp;
	}
}

void sum(ll a[], ll b[], ll c[]) {
	c[0]=max(a[0],b[0]);
	for(int i=1;i<=c[0];i++) {
		c[i]+=(a[i]+b[i]);
		if(c[i]>=bsm) c[i+1]+=c[i]/bsm,c[i]%=bsm;
	}
	if(c[c[0]+1]) c[0]++;
}

void out(ll a[]) {
	cout<<a[a[0]];
	for(int i=a[0]-1;i;--i) cout<<setw(bs)<<setfill('0')<<a[i];
	cout<<endl;
}

int main() {
//	cout << "Enter a number: ";
	cin >> aa;
//	cout << "Enter another number: ";
	cin >> bb;
	strToInt(aa,a);
	strToInt(bb,b);
	sum(a,b,c);
//	out(a);
//	out(b);
	out(c);
	return 0;
}
