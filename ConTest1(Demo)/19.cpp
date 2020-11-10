#include <bits/stdc++.h>
using namespace std;

void find(long long n){
	int i = 2,m=sqrt(n),count=0;
	while(i<=m){
		if(n%i==0){
			if(i%2==0) count++;
			if((n/i)!=i && (n/i)%2==0) count++;   // truong hop so chinh phuong
		}
		i++;
	}
	if(n%2==0) count++;
	cout<<count<<endl;
}
main(){
	int t;
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
		find(n);
	}
	
}
