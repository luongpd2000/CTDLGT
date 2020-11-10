#include<bits/stdc++.h>

using namespace std;

bool prime(int n){
	if(n<2) return false;
	int h=sqrt(n);
	for(int i=2;i<=h;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

main(){
	int t,n;
	cin>>t;
	while(t--){
		
		cin>>n;
		bool kt=false;
		for(int i=2;i<=n/2;i++){
			if(prime(i) && prime(n-i)){
				kt=true;
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		
		if(kt==false) cout<<"-1"<<endl;
	}
}
