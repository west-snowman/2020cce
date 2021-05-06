#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);

	if(n%2!=0){
		for(int i=1; i<=n; i+=2){
			ans=ans+i;
		}
	}

	else if(n%2==0){
		for(int i=1; i<n; i+=2){
			ans=ans+i;
		}
	}

	printf("%d",ans);

}
