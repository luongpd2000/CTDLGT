#include<iostream>
#include<math.h>
using namespace std;

void count(long long a){
	int count=0;
	long long n=sqrt(a);
	if(a%2==0){
		count++;
		for(long long i=2 ;i<=n;i++){
			if(a%i==0){
				if(i%2==0) count++;
				if((a/i)!=i  && (a/i)%2==0)  count++; 
			}
		}
		cout<<count<<endl;
	}else{
		cout<<"0"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;
		count(a);
	}
}
