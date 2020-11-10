#include<bits/stdc++.h>
using namespace std;
long long dem1=0,dem2=0;
long long findMax(long long n){
	double t = (double)log(n)/log(2);
	return (long long) t;
}
void find(long long n,long long l,long long r){ 
	if(dem1 > r) return ; 
	
	if(n==0||n==1){ 
		dem1++;
		if(dem1 >= l && dem1 <= r && n == 1){
			dem2++;
		}
		return ;
	}
	
	long long k = findMax(n);
	long long x = pow(2,k+1)-1;
	if(dem1 + x < l){
		dem1 += x;
		return ;
	}
	
	find(n/2,l,r);
	find(n%2,l,r);
	find(n/2,l,r);
}
main(){
	int t;
	long long n,r,l;
	cin>>t;
	while(t--){
		cin>>n>>l>>r;
		find(n,l,r);
		cout<<dem2<<endl;
		dem1=0;
		dem2=0;
	}
}
