#include <stdio.h>
int main()
{
	char a[10];
	scanf("%s",&a);

	for(int i=0; a[i]!=0; i++){
		if(a[i]>='A'&& a[i]<='Z'){
			a[i]+=32;
			printf("%c",a[i]);

		}
		else if(a[i]>='a'&& a[i]<='z'){
			a[i]-=32;
			printf("%c",a[i]);
		}
		else printf("%c",a[i]);
	}
	printf("\n");

}
