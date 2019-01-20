//题目的设定是，一个位数特别大的数。超过了所有最大的类型的存储范围，
//而我们需要做的是最简单的加法，所以我的想法是，
//把长的数分割为若干个可以被储存的小一点的数
//例如 123456 与789相加 被分为 123 456 与789,456与789相加 可得1245
//此时我们规定的 若干个部分都是3位的
//所以 1245 需要向下一个部分进一位； 即表现为 123+=1245/1e3
//此时 1245 进位之后就需要 减去进位部分，即表现为 1245 %=1e3
//重复以上操作 将所有对应部分相加 再逐一输出 即可达到大数相加的效果
//以下是 BORBER的 代码 及 注释
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class High_int{                             //大数类
    public:
    void Input();
    void Output();
    High_int operator+(High_int& Other){            //运算符的重载 大数 的加法
    High_int SUM;
    SUM.Count = max(this->Count,Other.Count);       //判断要执行加法的位数
    for(int i = 0;i < SUM.Count;++i){
    SUM.Num[i] = this->Num[i] + Other.Num[i];       //this指针指向的其实就是之后在计算是 在加法前面的那个元素
    SUM.Num[i+1]+=SUM.Num[i]/SUM.bsm;               //进位
    SUM.Num[i]%=SUM.bsm;                            //进位之后取余
    }
    if(SUM.Num[SUM.Count]) SUM.Count++;             //判断和的位数
    return SUM;
    };
    private:
    string Num_Str;
    unsigned int Num[150]={},Count = 0;
    int Length = 0,bs = 9,bsm = 1e9;      //bs 作为 截取各部分的长度
};                                          //相应的 bsm就是 该进位的上限
void High_int::Input(){
    string Num_Str;
    cin >> Num_Str;     //将大数作为字符串输入
    unsigned int Length = Num_Str.length();
    for(int i = Length-1;i>=0;i-=bs){       //一次截取bs长度的字符串变成数字
        int temp = 0;
        for(int j = max(0,i-bs+1);j <= i;++j) temp = temp*10+Num_Str[j]-'0';  //将对应的字符串变成数字
        Num[Count++] = temp;   //储存转换的数字 但是 是倒序的 如文首的 123456 将被转化成 Num[0]=456,Num[1]=123;
        }                       //这样在相加时进位即可转化成下一部分的加法
}
void High_int::Output(){
    for(int i = Count-1;i >= 0;--i) cout << Num[i];  // 因为是倒序的部分 所以 需要从最后一个开始输出
    cout << endl;
}
int main(){
    High_int A,B,SUM;
    A.Input();
    B.Input();
    SUM=A+B;        //“+”的重载
    SUM.Output();
    return 0;
}