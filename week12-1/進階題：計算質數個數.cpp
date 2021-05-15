#include <stdio.h>
int main()
{
	int a,b,n=0,ans=0;
	scanf("%d%d",&a,&b);

		for(int i=a; i<=b; i++){
			for(int j=2; j<i; j++){
				if(i%j==0) n++;
			}
			if(n==0)ans++;
			n=0;
		}

	printf("%d",ans);
}
