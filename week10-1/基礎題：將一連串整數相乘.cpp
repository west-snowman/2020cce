#include <stdio.h>
int main()
{
	int n,ans=1,a;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");

	for(int i=0; i<n; i++){
		scanf("%d",&a);
		printf("Enter a value: ");
		ans=ans*a;
	}

	printf("Product of the %d values is %d",n,ans);
}
