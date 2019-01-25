#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x[n],y[n],wid[n],len[n];			//wid[]是沿x轴方向的长，len[]是沿y轴方向的长
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&wid[i]);
		scanf("%d",&len[i]);
	}
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=n-1;i>=-1;i--)
	{
		if(i>=0 && a>=x[i] && a<=x[i]+wid[i] && b>=y[i] && b<=y[i]+len[i])
		{
			printf("%d",i+1);
			break;
		}
		if(i<0)
		printf("-1");
	}
	return 0;
}