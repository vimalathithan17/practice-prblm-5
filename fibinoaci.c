//fibinoci
#include<stdio.h>
void main()
{
	int n ,n3;
	printf("enter a number :");
	scanf("%d",&n);
	int n1=0;
	int n2=1;
	int i;
	for(i=1;i<n;i++)
	{
		if(i==1)
		{
			printf("%d,%d",n1,n2);
		}
		else
		{
			printf(",%d",n1+n2);
			n3=n1;
			n1=n2;
			n2+=n3;
		}
		
	}
}
