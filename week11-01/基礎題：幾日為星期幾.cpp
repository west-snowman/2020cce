#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	if(n%7==1) printf("0");
	else if(n%7==2) printf("1");
	else if(n%7==3) printf("2");
	else if(n%7==4) printf("3");
	else if(n%7==5) printf("4");
	else if(n%7==6) printf("5");
	else if(n%7==0) printf("6");

}
