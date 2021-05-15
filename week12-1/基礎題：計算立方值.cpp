#include <stdio.h>
int ANS(int n)
{
	int a;
	a=n*n*n;
	return a;

}
int main()
{
	int n;
	for(int i=1; i<=6; i++){
		scanf("%d ",&n);
		printf("%d\n",ANS(n));
	}
}
