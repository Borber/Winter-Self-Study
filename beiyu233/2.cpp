#include <bits/stdc++.h>
using namespace std;

const int N = 100050;

class Rect {
public:
	void read() {
		cin >> x1 >> y1 >> x2 >> y2;
		x2+=x1, y2+=y1;
	}
	bool inRect(int x, int y) {
		if(x1<=x && x<=x2 && y1<=y && y<=y2) return true;
		return false;
	}
private:
	int x1,x2,y1,y2;
} a[N];

int main() {
	int n, ans=-1, xx, yy;
	cin >> n;
	for(int i=1;i<=n;i++) a[i].read();
	cin >> xx >> yy;
	for(int i=1;i<=n;i++) if(a[i].inRect(xx, yy)) ans=i;
	cout << ans << endl;
	return 0;
}