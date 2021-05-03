#include <stdio.h>
int main()
{
	int a[100],n=0,ans=0;

	for(int i=0; i<100; i++){
		scanf("%d",&a[i]);
		if(a[i]==999) break;
		n++;
	}

	for(int i=0; i<n; i++){
		printf("Enter an integer ( 999 to end ): \n");
		ans=ans+a[i];
	}

	printf("Enter an integer ( 999 to end ): \n");
	printf("The total is: %d",ans);
}
