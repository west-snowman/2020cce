#include <stdio.h>

int max_digit(int a){
	int x,y=0;
	for(int i=1; a>1; i++){
		x=a%10;
		a=a/10;
		if(x>y) y=x;

	}
	return y;
}

int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
