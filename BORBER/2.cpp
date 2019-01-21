#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int nDes[10001][4];
    int n,x,y,nAns=-1;
    cin >> n;
    for(int i = 0;i < n;++i)
        for(int j = 0;j <4;++j)
            cin >> nDes[i][j];
    for(int i = 0;i < n;++i)
        for (int j = 0; j <2; ++j)
            nDes[i][j+2]+=nDes[i][j];
    cin >> x >> y;
    for (int i = n-1; i >= 0; --i) if(x>=nDes[i][0]&&x<=nDes[i][2]&&y>=nDes[i][1]&&y<=nDes[i][3])  {nAns=i+1;break;}
    cout << nAns << endl;
    return 0;
}