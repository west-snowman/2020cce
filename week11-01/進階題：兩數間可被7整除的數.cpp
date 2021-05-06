#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	if(a<b){
		for(int i=a; i<b; i++){
			if(i%7==0) printf("%d ",i);
		}
	}
	else if(a>b){
		for(int i=b; i<a; i++){
			if(i%7==0) printf("%d ",i);
		}
	}
}
