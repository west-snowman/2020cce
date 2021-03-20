#include <stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if(n>='A' && n<='Z') printf("U");
	else if(n>='a' && n<='z') printf("L");
	else if(n>='0' && n<='9') printf("D");
	else printf("O");
}
