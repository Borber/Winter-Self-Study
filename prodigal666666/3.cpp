#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;
int judge(int a,int b, int c)
{
    int num[9];
    num[0] = a / 100;
    num[1] = a / 10 % 10;
    num[2] = a % 10;
    num[3] = b / 100;
    num[4] = b / 10 % 10;
    num[5] = b % 10;
    num[6] = c / 100;
    num[7] = c / 10 % 10;
    num[8] = c % 10;
    sort(num,num+9);
    for(int i = 0;i < 8;i++)
    if(num[i] == num[i + 1]||num[i] == 0)
    return 0;
    return 1;
}
int main()
{
    for(int i = 123;i <= 333;i++)
    {
    int j = 2 * i;
    int k = 3 * i;
    if(judge(i,j,k))
    printf("%d %d %d\n",i,j,k);
    }
    return 0;
}