#include <stdio.h>
int main()
{
	int n=0;
	char a[81];
	scanf("%s",a);

	for(int i=0; a[i];i++){
		if(a[i]>='0' && a[i]<='9') n++;
	}
	printf("%d",n);
}
