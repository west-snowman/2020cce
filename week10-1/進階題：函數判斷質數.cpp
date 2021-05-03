#include <iostream>
using namespace std;
int prime(int n)
{
	int a;
	for(int i=2; i<n; i++){
		if(n%i==0){
			a=0;
			break;
		}
		else a=1;
	}
	return a;

}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}

