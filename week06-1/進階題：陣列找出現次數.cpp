#include <stdio.h>
int main()
{
	int a[10],b=0,n,ans=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		b++;
	}

	scanf("%d",&n);
	for(int i=0; i<b; i++){
		if(a[i]==n) ans++;
	}

	printf("%d\n",ans);
}
