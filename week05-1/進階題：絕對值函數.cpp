#include <stdio.h>
int f(int n)
{
	int a;
	if(n<1) a=n*(-1);
	else if(n>1) a=a;
	return a;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
