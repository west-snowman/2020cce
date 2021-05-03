#include <stdio.h>
int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);

	a=n/50;
	b=n%50/10;
	c=n%10/5;
	d=n%5;

	printf("%d=50*%d+10*%d+5*%d+1*%d",n,a,b,c,d);

}
