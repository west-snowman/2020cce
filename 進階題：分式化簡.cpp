#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d%d",&a,&b);

	for(int i=1; i<10000; i++){
		if(a%i==0 && b%i==0) n=i;
	}

	printf("%d %d\n",a/n,b/n);
}
