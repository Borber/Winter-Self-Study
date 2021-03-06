#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class High_int{
    public:
    void Input();
    void Output();
    High_int operator+(High_int& Other){
    High_int SUM;
    SUM.Count = max(this->Count,Other.Count);
    for(int i = 0;i < SUM.Count;++i){
    SUM.Num[i] = this->Num[i] + Other.Num[i];
    SUM.Num[i+1]+=SUM.Num[i]/SUM.bsm;
    SUM.Num[i]%=SUM.bsm;
    }
    if(SUM.Num[SUM.Count]) SUM.Count++;
    return SUM;
    };
    private:
    string Num_Str;
    unsigned int Num[150]={},Count = 0;
    int Length = 0,bs = 9,bsm = 1e9;
};
void High_int::Input(){
    string Num_Str;
    cin >> Num_Str;
    unsigned int Length = Num_Str.length();
    for(int i = Length-1;i>=0;i-=bs){
        int temp = 0;
        for(int j = max(0,i-bs+1);j <= i;++j) temp = temp*10+Num_Str[j]-'0';
        Num[Count++] = temp;
        }
}
void High_int::Output(){
    for(int i = Count-1;i >= 0;--i) cout << Num[i];
    cout << endl;
}
int main(){
    High_int A,B,SUM;
    A.Input();
    B.Input();
    SUM=A+B;
    SUM.Output();
    return 0;
}
/*
#include <iostream>
using namespace std;
class Math_Plus{
    public:
    void Input();
    void Chose();
    void Plus();
    void Output();
    private:
    int Num0[1000]={},Num1[1000]={};
    int *Num0_Printer = Num0,*Num1_Printer = Num1;
    int Num0_Length = 0,Num1_Length = 0,Num_Length;
};
void Math_Plus::Input(){
    char Num_Char;
    cout << "Please input the number A" << endl;
    while(scanf("%c",&Num_Char)&&Num_Char>='0'&&Num_Char<='9') Num0[Num0_Length++] = Num_Char - '0';
    {int Num_Temp[1000],temp = Num0_Length;
    for(int i = Num0_Length-1;i >= 0;--i) Num_Temp[Num0_Length-1-i] = Num0[i];
    for(int i = 0;i < Num0_Length;++i) Num0[i]=Num_Temp[i];
    }
    cout << "Please input the number B" << endl;
    while(scanf("%c",&Num_Char)&&Num_Char>='0'&&Num_Char<='9') Num1[Num1_Length++] = Num_Char - '0';
    {int Num_Temp[1000],temp = Num1_Length;
    for(int i = Num1_Length-1;i >= 0;--i) Num_Temp[Num1_Length-1-i] = Num1[i];
    for(int i = 0;i < Num1_Length;++i) Num1[i]=Num_Temp[i];
    }
}

void Math_Plus::Chose(){
    if(Num0_Length < Num1_Length){
        int *temp = Num0_Printer;
        Num0_Printer = Num1_Printer;
        Num1_Printer  = temp;
        Num_Length = Num1_Length;
    }
    else Num_Length = Num0_Length;
}
void Math_Plus::Plus(){
    for(int i = 0;i < Num_Length;++i){
        Num0_Printer[i]+=Num1_Printer[i];
        Num0_Printer[i+1]+=Num0_Printer[i]/10;
        Num0_Printer[i]%=10;
    }
    if(Num0_Printer[Num_Length]) ++Num_Length;
}
void Math_Plus::Output(){
    cout << "A+B=" << endl;
    for(int i = Num_Length-1;i >= 0;--i)  cout << Num0[i];
    cout << endl;
}
int main(){
    Math_Plus Plus_High_Precision;
    Plus_High_Precision.Input();
    Plus_High_Precision.Chose();
    Plus_High_Precision.Plus();
    Plus_High_Precision.Output();
    return 0;
}
*/