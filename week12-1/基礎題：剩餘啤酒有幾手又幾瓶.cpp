#include <stdio.h>
int main()
{
	int p,d,n;
	scanf("%d%d",&p,&d);

	n = p-(d*6);

	printf("%d %d",n/6,n%6);

}
