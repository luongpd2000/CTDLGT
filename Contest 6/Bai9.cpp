#include<bits/stdc++.h>

using namespace std;

main(){
	int t,n,k;
	int a[1001];
	cin>>t;
	while(t--){
		cin>>n>>k;	
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]+a[j]==k){
					dem++;
				}
				if(a[i]+a[j]>k){
					break;
				}
			}
		}
		
		cout<<dem<<endl;
	}
}
