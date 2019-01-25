#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void Clear(int Num,int N[]){
    N[Num/100]=1;
    N[Num/10%10]=1;
    N[Num%10]=1;
}
void Print(int Num){
    int N[10]={},SUM = 0;
    for(int i = 1;i <= 3;++i)
    Clear(Num*i,N);
    for(int i = 1;i <= 9;++i) if(N[i]) ++SUM;
    if(SUM == 9) cout << Num << " " << Num*2 << " " << Num*3 << "\n";
}
int main()
{
    for(int i = 123; i < 333; ++i)
    Print(i);
    return 0;
}