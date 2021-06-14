#include <stdio.h>
int main()
{
	int n[100],a=0;
	for(int i=0; i<100; i++){
		scanf("%d",&n[i]);
		if(n[i]==0) break;
		else a++;
	}

	for(int i=0; i<a; i++){
		for(int j=i+1; j<a; j++){
			if(n[i]<n[j]){
				int temp=n[i];
					n[i]=n[j];
					n[j]=temp;
			}
		}
	}
	printf("[%d,%d]",n[a-1],n[0]);
}


