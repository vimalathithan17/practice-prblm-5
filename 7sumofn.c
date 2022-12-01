//sum of integers
#include<stdio.h>
void main()
{
	int n,r;
	int sum=0;
	printf("enter the number of iterations:");
	scanf("%d",&r);
	printf("enter the number of elements:");
	scanf("%d",&n);
	int i=1;
	while(i<=r)
	{
		int j=1;
		while (j<=n)
		{
			sum+=j;
			j++;
		}
		n=sum;
		i++;
	}
	printf("sum:%d",sum);
}
