#include<bits/stdc++.h>
using namespace std;
// g�p doi day so

// gap doi k lan cua n n*(2^k)
long long tinh(int n,long long k){
	if(k%2==1) return 1;
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k<x) 
		return  tinh(n-1,k);
	return  tinh(n-1,k-x);
}

main(){
	int t,n;
	long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	}
}
