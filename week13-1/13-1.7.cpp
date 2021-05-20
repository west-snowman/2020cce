#include<iostream>
using namespace std;
int GCD(int a, int b){
	int n=0;
	if(a<b){
		for(int i=2; i<=b; i++){
			if(a%i==0 && b%i==0) n=i;
		}
		if(n==0) n=1;
	}
	else if(a>b){
		for(int i=2; i<=a; i++){
			if(a%i==0 && b%i==0) n=i;
		}
		if(n==0) n=1;
	}
	return n;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
