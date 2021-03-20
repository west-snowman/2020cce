#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		int space=n-i;
		for(int k=1; k<=space; k++){
			printf(" ");
		}

		int star=2*i-1;
		for(int k=1; k<=star; k++){
		printf("*");
		}
		printf("\n");
	}
}
