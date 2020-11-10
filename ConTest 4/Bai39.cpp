#include<bits/stdc++.h>

using namespace std;


main(){
	int t;
	int n;
	cin>>t;
	
	while(t--){
		cin>>n;
		long long *d1=new long long[n];
		long long *d2=new long long[n-1];
		int kt=0;
		for(int i=0;i<n;i++){
			cin>>d1[i];
		}
		int index;
		for(int i=0;i<n-1;i++){
			cin>>d2[i];
			if(d1[i]!=d2[i] && kt==0) {
				 kt=1; 
				 index=i;
			}
		}
		if(kt==1) {
			cout<<index+1<<endl;
		}
		if(n==1) cout<<1<<endl;
		if(n!=1 && kt==0) cout<<n<<endl;
	}
}
