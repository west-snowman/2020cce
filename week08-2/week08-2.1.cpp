#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
int compare( const void *p1, const void *p2){
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%s",line[i]);
	}
	qsort( line, N, 10, compare);
	for(int i=0; i<N; i++){
		printf("%s\n",line[i]);
	}
}
