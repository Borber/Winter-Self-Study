#include <stdio.h>
#include <string.h>
#define N 1000
int main()
{

    char A[N],B[N];
    char *s=A;
    int F[N],cp=0;
    printf("input first number\n");
    gets(A);
    printf("input secend number\n");
    gets(B);
    int j=strlen(A)-1;
    int k=strlen(B)-1;
    int l=N-1;
    while(j>-1&&k>-1)
    {
        int x=A[j--]-'0'+B[k--]-'0'+cp;
        F[l--]=x%10;
        cp=x/10;
    }
    if(k>-1)
    {
        j=k;
        s=B;
    }
    while(j>-1)
    {
        int x=A[j--]-'0'+cp;
        F[l--]=x%10;
        cp=x/10;
    }
    if(cp!=0)
    {
        F[l--]=cp;
    }
    printf("giving out the answer is\n");
    for(j=l+1;j<N;j++)
    {
        printf("%d",F[j]);
    }

    return 0;
}