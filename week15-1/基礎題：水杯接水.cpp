#include <stdio.h>
int main()
{
	int n,m,ans;
	scanf("%d%d",&n,&m);

	if(n%m>0) ans=(n/m)+1;
	else ans=n/m;

	printf("%d",ans);

}
