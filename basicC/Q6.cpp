#include<stdio.h>
int main()
{
	int i,j,n,f=1;
	int s=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{		f*=i;
			s=s+f;
		
	}
		printf("The sum of the series is %d\n",s);	
}
