#include <stdio.h>
int main()
{
	int n, a[101]={}, b[101]={};
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(int i=0; i<n; i++){
		scanf("%d",&b[i]);
	}

	for(int i=0; i<n; i++){
		printf("%d ",a[i]+b[i]);
	}
}
