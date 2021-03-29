#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);

	if(a<100)
	b=a/10+a%10*10;

	else if(a<1000)
	b=a/100+a%100/10*10+a%10*100;

	else if(a<10000)
	b=a/1000+a%1000/100*10+a%100/10*100+a%10*1000;

	printf("%d+%d=%d\n",a,b,a+b);

}
