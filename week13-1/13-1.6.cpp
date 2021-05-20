#include <stdio.h>
int main()
{
	int n,a=999999,b,time=3600*1.2;
	for(int i=0; i<10; i++){
		scanf("%d",&n);
		if(n<a){
			a=n;
			b=i+1;
		}
	}
	printf("%d %d",b,time/a);
}
