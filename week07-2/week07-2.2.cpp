#include <stdio.h>
#include <string.h>
int main()
{
	int n,ans=1;
	scanf("%d",&n);

	char a[2000][75];
	char temp[75];
	char others[100];

	for(int i=0; i<n; i++){
		scanf("%s",a[i]);
		gets(others);
	}

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if( strcmp(a[i],a[j]) > 0 ){
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0; i<n; i++){
		if(strcmp(a[i],a[i+1]) == 0 ){
			ans++;
		}
		else{
			printf("%s %d\n",a[i],ans);
			ans=1;
		}
	}

}
