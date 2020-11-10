#include<bits/stdc++.h>

using namespace std;


main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		int P[101],Q[101];
		int kq[300];
		
		cin>>m>>n;
		for(int i=0;i<m;i++){
			cin>>P[i];
		}
		for(int i=0;i<n;i++){
			cin>>Q[i];
		}
		for(int i=0;i<m+n-1;i++){
			kq[i]=0;
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				kq[i+j]+=P[i]*Q[j];
			}
		}
		
		
		for(int i=0;i<m+n-1;i++){
			cout<<kq[i]<<" ";
		}
		cout<<endl;
	}
}
