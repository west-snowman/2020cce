#include <stdio.h>
int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);

	a=n/1000;
	b=n%1000/100;
	c=n%1000%100/10;
	d=n%10;

	printf("%d\n",a*8+b*4+c*2+d*1);
}
