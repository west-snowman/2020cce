#include <stdio.h>
int main()
{
	int x1,y1,x2,y2,a,b;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

	if(x2>x1) a=x2-x1;
	else a=x1-x2;

	if(y2>y1) b=y2-y1;
	else b=y1-y2;

	printf("%d",a*b);

}
