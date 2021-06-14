#include <stdio.h>
int A(int a){
	if(a>0) return a;
	else return 0;
}
int main()
{
	int n,a[5]={};
	scanf("%d",&n);

	if(n<20000 && n>9999){
		a[0]=n%10;
		a[1]=(n%100)-a[0];
		a[2]=(n%1000)-(a[0]+a[1]);
		a[3]=(n%10000)-(a[0]+a[1]+a[2]);
		a[4]=(n/10000)*10000;
		for(int i=0; i<5; i++){
			printf("%d ",A(a[i]));
		}
	}
	else if(n<10000 && n>999){
		a[0]=n%10;
		a[1]=(n%100)-a[0];
		a[2]=(n%1000)-(a[0]+a[1]);
		a[3]=(n/1000)*1000;
		for(int i=0; i<4; i++){
			printf("%d ",A(a[i]));
		}
	}
	else if(n<1000 && n>99){
		a[0]=n%10;
		a[1]=(n%100)-a[0];
		a[2]=(n/100)*100;
		for(int i=0; i<3; i++){
			printf("%d ",A(a[i]));
		}
	}
	else if(n<100 && n>9){
		a[0]=n%10;
		a[1]=(n/10)*10;
		for(int i=0; i<2; i++){
			printf("%d ",A(a[i]));
		}
	}
	else printf("%d ",A(n));
}
