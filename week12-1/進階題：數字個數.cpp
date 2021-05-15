#include <stdio.h>
int main()
{
	int n,ans=0;

	for(int i=1; i<=10; i++){
		scanf("%d",&n);
		if(n!=0) ans++;
	}
	printf("%d",ans);
}
