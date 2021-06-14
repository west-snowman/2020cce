#include <stdio.h>
int main()
{
	int a,h,s,m,b;
	scanf("%d",&a);

	h=a/3600;
	s=a%3600 /60;
	m=a%60;

	printf("%02d:%02d:%02d",h,s,m);

}

