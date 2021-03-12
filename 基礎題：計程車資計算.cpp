#include <stdio.h>
int main()
{
	int a,ans=100;
	scanf("%d",&a);

	a=a-2000;
	ans+=a/500*5;
	if(a%500!=0) ans=ans+5;

	printf("%d\n",ans);
}

