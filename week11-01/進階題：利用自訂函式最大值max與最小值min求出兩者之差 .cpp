#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	if(a>b){
		int temp=a;
			a=b;
			b=temp;
	}
	if(b>c){
		int temp=b;
			b=c;
			c=temp;
	}
	if(c>d){
		int temp=c;
			c=d;
			d=temp;
	}
	if(a>d){
		int temp=a;
			a=d;
			d=temp;
	}
	return d;
}
int min(int a,int b,int c,int d){
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(b<c){
		int temp=b;
			b=c;
			c=temp;
	}
	if(c<d){
		int temp=c;
			c=d;
			d=temp;
	}
	if(a<d){
		int temp=a;
			a=d;
			d=temp;
	}
	return d;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* �W��C++ main �禡 ���P�� �U�� C �� main �禡
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
