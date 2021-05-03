#include <stdio.h>
int main()
{
	int a,b,n;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);

	for(int i=1; i<=b; i++){
		if(a%i==0 && b%i==0) n=i;
	}

	printf("The greatest common divisor of %d and %d is %d\n",a,b,n);

}
