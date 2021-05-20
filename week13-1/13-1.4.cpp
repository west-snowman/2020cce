#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);

	if(a<b){
		for(int i=a; i<=b; i++){
			if(i%3==0) ans+=i;
		}
	}
	else if(a>b){
		for(int i=b; i<=a; i++){
			if(i%3==0) ans+=i;
		}
	}
	printf("%d",ans);
}
