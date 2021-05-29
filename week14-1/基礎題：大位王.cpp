#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);

	if(n>=0){
		if(n>=0 && n<10) printf("%d",n);
		else if(n>=10   && n<100)   printf("%d\n",n/10);
		else if(n>=100  && n<1000)  printf("%d\n",n/100);
		else if(n>=1000 && n<10000) printf("%d\n",n/1000);
	}

	else if(n<0){
		a=n*(-1);
		if     (a>=10   && a<100)   printf("%d\n",a/10);
		else if(a>=100  && a<1000)  printf("%d\n",a/100);
		else if(a>=1000 && a<10000) printf("%d\n",a/1000);
	}

}
