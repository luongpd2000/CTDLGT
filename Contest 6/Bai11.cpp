#include<bits/stdc++.h>
using namespace std;
main(){
	int n; 
	int t; cin>>t;
	while(t--){
		
		cin>>n; int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		
		int Min=a[0]+a[1];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int sum=a[i]+a[j];
				if(abs(sum)<abs(Min)) Min=sum;
			}
		}
		cout<<Min;
		cout<<endl;
	}
	
}
