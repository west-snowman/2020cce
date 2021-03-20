#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int a=n/10000;
	int b=n%10000/1000;
	int c=n%1000/100;
	int d=n%100/10;
	int e=n%10;

	printf("%d   %d   %d   %d   %d",a,b,c,d,e);
}
