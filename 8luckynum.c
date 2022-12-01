//luckynumber
#include<stdio.h>
void main()
{
	int n,sod,q,sq;
	printf("enter a number:");
	scanf("%d",&n);
	int n1=n;
	sod=0;
	sq=0;
	while (n1!=0)
	{
		sod+=n1%10;
		n1/=10;
	}
	q=n/sod;
	int q2=q;
	while(q2!=0)
	{
		sq+=q2%10;
		q2/=10;
	}
	if(sq==10)
	{
		printf("%d is a lucky number",n);
	}
	else
	{
		printf("%d is not a lucky number",n);
	}
}
