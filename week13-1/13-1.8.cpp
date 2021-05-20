#include <stdio.h>
int main()
{
	int n,a,ans=0;
	scanf("%d",&n);
	a=11*n;

	for(int i=11; i<=a; i+=11){
		ans=ans+i;
	}
	printf("%d",ans);
}
