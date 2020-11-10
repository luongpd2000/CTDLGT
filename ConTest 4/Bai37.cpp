#include<bits/stdc++.h>

using namespace std;

void search(long long arr[],long long l,long long h,long long x){
	if(l<h){
		long long m=(l+h)/2;
		if(x<arr[m]){
			search(arr,l,m-1,x);
		}else if(x==arr[m]){
			return ; 
		} else {
			search(arr,m+1,h,x);
		}
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long *a=new long long[n];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
		long long l=0;
		long long h=n-1;
		int kt=0;
		search(a,l,h,x);
		
		for(long long i=h;i>=l;i--){
			if(a[i]<=x){
				cout<<i+1<<endl;
				kt=1;
				break;
			}
		}
		
		if(kt==0) cout<<-1<<endl;
	}
}
