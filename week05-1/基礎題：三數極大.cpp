#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(b>c){
		int temp=b;
		b=c;
		c=temp;
	}
	if(a>c){
		int temp=c;
		a=c;
		c=temp;
	}
	printf("%d\n",c);

}
