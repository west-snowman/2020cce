#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	if(n<100) a=n/10;
	else if(n<1000) a=n/100;
	else if(n<10000) a=n/1000;
	else if(n<100000) a=n/10000;
	printf("%d",a);
}
