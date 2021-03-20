#include <stdio.h>
int main()
{
	char s[100],a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%s",&s);
	for(int i=0; s[i]!='\0'; i++){
		if     (s[i]=='1') a++;
		else if(s[i]=='2') b++;
		else if(s[i]=='3') c++;
		else if(s[i]=='4') d++;
		else if(s[i]=='5') e++;
		else if(s[i]=='6') f++;
	}
	printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n",a,b,c,d,e,f);
}
