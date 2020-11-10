#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	int n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(int i=0;i<n-1;i++){
			int kt=1;
			for(int j=i+1;j<n;j++){
				
				if(a[i]<a[j]){
					cout<<a[j]<<" ";
					kt=0;
					break; 
				}
			}
			if(kt==1) cout<<"-1 ";
		}
		
		cout<<"-1"<<endl;
	}
}
