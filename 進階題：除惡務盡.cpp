#include <stdio.h>
int main()
{
	char n[100];
	scanf("%s",&n);
	for(int i=0; n[i]!=0; i++){

		if(n[i]!='2') printf("%c",n[i]);
	}
	printf("\n");


}
