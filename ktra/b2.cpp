#include<bits/stdc++.h>

using namespace std;

int dp(int a[], int n){
	int in,ex,ex_new;
	in=a[0]; 
	ex=0; 
	for(int i=1;i<n;i++){
		ex_new=max(in,ex); 
		in=ex+a[i]; 
		ex=ex_new;
	}
	return max(in,ex);
}

main(){
	int t,n; cin>>t;
	while(t--){
		cin>>n; int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<dp(a,n)<<endl;
	}
}
