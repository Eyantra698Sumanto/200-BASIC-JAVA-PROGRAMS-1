#include<stdio.h>
#define PI 3.1415926
int main()
{
	int i,j,k;
	printf("The possible combinations are:\n");
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			for(k=1;k<=3;k++)
			  printf("%d%d%d\n",i,j,k);
}
