#include<bits/stdc++.h>

using namespace std;
long long m=123456789;
// so day llaf 2^n-1
long long powM(int s,long long k){
	if(k==0) return 1;
	long long x=powM(s,k/2);
	if(k%2==0) return x*x%m;
	else return ((s*x)%m*x)%m;
}

main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<powM(2,n-1)<<endl;
	}
}
