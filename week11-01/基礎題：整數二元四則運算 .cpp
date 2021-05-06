#include <stdio.h>
int main()
{
	int a,b;
	char n;
	scanf("%d ",&a);
	scanf("%c ",&n);
	scanf("%d",&b);

	if(n=='+') 		printf("%d",a+b);
	else if(n=='-') printf("%d",a-b);
	else if(n=='*') printf("%d",a*b);
	else if(n=='/') printf("%d",a/b);


}
