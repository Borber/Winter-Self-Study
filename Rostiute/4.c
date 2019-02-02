#include<stdio.h>
int main()
{
	int a;
	float s=0;
	scanf("%d",&a);
	for(int i=1;;i++)
	{
		s=s+1.0/i;
		if(s-a>0)
		{
		printf("%d",i);
		break;
		}
	}
	return 0;
}