#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	if(n>=1000 && n<10000) printf("%d",n/1000);
	else if(n>=10000 && n<100000) printf("%d",(n/1000)%10);
	else if(n>=100000 && n<1000000) printf("%d",(n/1000)%10);
	else printf("0");
}
