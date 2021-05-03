#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100],x,y;
	scanf("%s%s",a,b);



	if(strlen(a)>strlen(b)) printf("1");
	else if(strlen(a)<strlen(b)) printf("-1");
	else printf("%d",strcmp(a,b));
}
