#include <stdio.h>
int f(int a,int b){
	int n;
	if(a<b) n=-1;
	else if(a==b) n=0;
	else n=1;
	return n;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
