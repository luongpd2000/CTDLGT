#include<bits/stdc++.h>

using namespace std;

int xuly(int n,int m){
	if(n==1) return 1;
	else return (xuly(n-1,m)+m-1)%n+1;
}

main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<xuly(n,m+1)<<endl;
	}
}
