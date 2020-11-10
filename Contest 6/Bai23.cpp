#include<bits/stdc++.h>

using namespace std;

main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		
		int a[n];
		
		for(int i=1;i<n;i++){
			cin>>a[i];
		}
		bool kt=false;
		for(int i=1;i<n;i++){
			if(a[i]!=i){
				kt=true;
				cout<<i<<endl;
				break;
			}
		}
		
		if(kt==false) cout<<n<<endl;
	}
}
