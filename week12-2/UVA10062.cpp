#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0; gets(line); t++){
		int ans[256]={};
		char ascii[256];

		for(int i=0; i<256; i++) ascii[i]=i;

		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			ans[c]++;
		}
		for(int i=0; i<256; i++){
			for(int j=i+1; j<256; j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
						ans[i]=ans[j];
						ans[j]=temp;
					char c=ascii[i];
						 ascii[i]=ascii[j];
						 ascii[j]=c;
				}
				else if( ans[i]==ans[j] && ascii[i]<ascii[j]){
					int temp=ans[i];
						ans[i]=ans[j];
						ans[j]=temp;
					char c=ascii[i];
						 ascii[i]=ascii[j];
						 ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");

		for(int i=0; i<256; i++){
			if(ans[i]>0) printf("%d %d\n",ascii[i] ,ans[i]);
		}
	}

}
