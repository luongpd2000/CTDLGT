#include<iostream>
#include<math.h>
using namespace std;

void solution(long long a){
	long long m=sqrt(a);
	for(int i=2;i<m;i++){
		int n=0;
	 	while(a%i==0) 
		 {
		 	n=n+1;
		 	a=a/i;
		}
	 	if(n!=0) cout<< i << "(" <<n<< ") ";
	}
	if(a>m) cout<<a<<"(1)";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		long long a;
		cin>>a;
		cout<<"Test "<<i<<": ";
		solution(a);
	}
}
