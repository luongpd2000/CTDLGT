#include<bits/stdc++.h>
using namespace std;

main(){
	int n,m; 
	int t; 
	cin>>t;
	while(t--){
		cin>>n>>m; 
		int a[n],b[m]; 
		
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		
		//union;
		int i=0,j=0;
		while(i<n&&j<m){
			if(a[i]<b[j]) cout<<a[i++]<<" ";
			else if(a[i]>b[j]) cout<<b[j++]<<" ";
			else {
				cout<<a[i]<<" "; 
				i++;j++;
			}
		}
		while(i < n) cout<<a[i++]<<" "; 
 		while(j < m) cout<<b[j++]<<" "; 
		cout<<endl;
		
		//intersection
		
		int r=0,s=0;
		while(r<n&&s<m){
			if(a[r]<b[s]) r++;
			else if(a[r]>b[s]) s++;
			else{
				cout<<a[r]<<" ";
				r++;s++;
			}
		}
		cout<<endl;	
	}
	
}