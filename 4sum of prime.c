//sum of prime numbers
#include<stdio.h>
void main(){
	int n,sum;
	sum=0;
	printf("enter a number upto which u want to find the sum of prime numbers(greater than 1):");
	scanf("%d",&n);
	if (n==2)
	{
		sum=0;
	}
	else
	{
		int i;
		int j;
		for(i=2;i<n;i++)
		{
			
			printf("i%d\tj%d\n",i,j);
			for(j=2;j<i;j++)
			{
				printf("j%d\t rem%d\n",j,i%j);
				if(i%j==0)
				{
					break;
				}	
			}
			if(i==2)
			{
					sum+=i;
			}
			else if(j==i)
			{
					sum+=i;
			}
			printf("j%d\tsum%d\n",j,sum);
		}
	}
	printf("sum is:%d",sum);
}
