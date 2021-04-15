#include <string.h>
#include <stdlib.h>
char tree[100000][32];
int compare( const void *p1,const void*p2)
{
	return strcmp((char*)p1, (char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);

	for(int t=0; t<T; t++){
		int N=0;//有幾行讀進來?
		for(int i=0;   ; i++){
			gets( tree[i] );
			if( strcmp(tree[i],"") ==0 ){
				N=i;//要記錄現在的i
				break;//就可以離開了
			}
		}

		qsort(tree, N, 32, compare);

		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0; i<N-1; i++){
			if( strcmp(tree[i],tree[i+1]) != 0 ){
				printf("%.4f\n",100*ans/(float)N);
				printf("%s ",tree[i+1]);
				ans=1;
			}
			else{
				ans++;
			}
		}
		printf("%.4f\n",100*ans/(float)N);
	}

}
