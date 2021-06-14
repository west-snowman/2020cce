#include <stdio.h>
#include <string.h>
int main()
{
	char n[20];
	int a=0;
	scanf("%s",n);
	a=strlen(n);

	if(a%3==1){
		printf("%c",n[0]);
		for(int i=1; i<a; i+=3){
			printf(",%c%c%c",n[i],n[i+1],n[i+2]);
		}
	}
	else if(a%3==2){
		printf("%c%c",n[0],n[1]);
		for(int i=2; i<a; i+=3){
			printf(",%c%c%c",n[i],n[i+1],n[i+2]);
		}
	}
	else if(a%3==0){
		printf("%c%c%c",n[0],n[1],n[2]);
		for(int i=3; i<a; i+=3){
			printf(",%c%c%c",n[i],n[i+1],n[i+2]);
		}
	}
}

