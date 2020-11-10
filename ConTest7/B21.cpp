#include<bits/stdc++.h>

using namespace std;

main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		long long b,c;
		
		for(int i=0;i<n-1;i++){
			
			int ktlon=-1;
			int ktnho=-1;
			
			for(int j=i+1;j<n;j++){
				
				if(ktlon==-1 && a[i]<a[j]){
					ktlon=j;
					
				}else if(ktlon!=-1 && a[j]<a[ktlon]){
					ktnho=j;
					break;
					
				}
			}
			if(ktnho==-1) cout<<"-1 ";
			else cout<<a[ktnho]<<" ";
		}
		
		cout<<"-1"<<endl;
	}
}
