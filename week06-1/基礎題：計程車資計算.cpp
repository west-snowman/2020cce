#include <stdio.h>
int main()
{
	int n,ans=100;
	scanf("%d",&n);

	if(n<1500) printf("%d",ans);
	else if(n>1500){
		n=n-1500;
		ans+=n/250*5;

		if(n%250!=0) ans=ans+5;
	}
	printf("%d",ans);


}

