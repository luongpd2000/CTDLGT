#include<bits/stdc++.h>
using namespace std;
long long MAX = 1000000007;

long long find(long long n,long long k){
	if(k==0) return 1;
	long long a = find(n,k/2);
	long long  b = (a*a)%MAX;
	if(k%2 == 0){
		return b;
	}
	return (n*b)%MAX;
}

main(){
	int t;
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
		long long n1=n,m=0;
		while(n1 > 0){
			m = m*10 + n1%10;
			n1 /= 10;
		}
		if(m == 1){
			cout<<n<<endl;
		}
		else{
			cout<<find(n,m)<<endl;
		}
	}
}
