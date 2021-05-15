#include <stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d%d%d",&a,&b,&c);
	if(c>b){
		int temp=c;
			c=b;
			b=temp;
	}
	if(b>a){
		int temp=b;
			b=a;
			a=temp;
	}
	if(c>a){
		int temp=c;
			c=a;
			a=temp;
	}
	if(c>b){
		int temp=c;
			c=b;
			b=temp;
	}
	n = a*100+b*10+c;
	printf("%d",n+1);
}
