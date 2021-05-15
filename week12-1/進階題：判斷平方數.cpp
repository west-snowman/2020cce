#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);

	for(int i=2; i<n; i++){
		if( i*i==n && n%i==0 ){
			printf("%d",i);
			a=i;
			break;
		}
	}
	if(a==0) printf("0");

}
