#include <stdio.h>
int f(int n)
{
	int a;
	if(n>=1000) a=a/1000 +a%1000/100*10 +a%100/10*100 +a%10*1000;
	else if(n>=100) a=a/100 +a%100/10*10 +a%10*100;
	else if(n>=10) a=n/10 +n%10*10;
	else a=n;
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}

