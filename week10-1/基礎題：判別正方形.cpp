#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a,&b);

	if(a==b) printf("It is a square ");
	else if( a>b || a<b ) printf("It is not a square ");

}
