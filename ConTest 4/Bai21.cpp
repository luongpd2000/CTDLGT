#include<iostream>

using namespace std;
int m=1e9+7;
long long powM(int n,int k){
	if(k==0) return 1;
	long long x=powM(n,k/2);
	if(k%2==0) return x*x%m;
	else return ((n*x)%m*x)%m;
}

main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<powM(n,k)<<endl;
	}
}
