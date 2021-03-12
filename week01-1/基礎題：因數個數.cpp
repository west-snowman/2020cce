#include <stdio.h>
int main()
{
	int a,n=0;
	scanf("%d",&a);

	for(int i=1; i<=10000; i++ ){
		if(a%i==0) n++;
	}
	printf("%d\n",n);
}
