#include <stdio.h>
int main()
{
	int n,ans=0;
	for(int i=0; i<10000; i++){
		scanf("%d",&n);
		if(n>0) ans=ans+n;
		else if(n==0) break;
	}

	printf("%d",ans);

}
