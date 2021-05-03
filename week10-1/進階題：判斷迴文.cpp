#include <stdio.h>
#include <string.h>

int main()
{
	char n[81];
	int a=0;
	scanf("%s",n);

	//strlen(n)==10
	for(int i=0; i<strlen(n); i++){
		if(n[i]!=n[strlen(n)-1-i]){
			a=1;
			printf("NO");
			break;
		}
	}
	if(a==0) printf("YES");


}
