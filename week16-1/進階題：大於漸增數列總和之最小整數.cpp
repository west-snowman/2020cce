#include <stdio.h>
int main()
{
	int k,n=0;
	scanf("%d",&k);

	for(int i=1; i<=k; i++){
		n+=i;
		if(n>k){
			printf("%d",i);
			break;
		}
	}

}
