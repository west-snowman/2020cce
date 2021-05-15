#include <stdio.h>
int MIN(int a,int b,int c)
{
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
		int temp=a;
			a=c;
			c=temp;
	}
	if(a>b){
		int temp=a;
			a=b;
			b=temp;
	}
	return a;
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	printf("%d\n",MIN(a,b,c));

}
