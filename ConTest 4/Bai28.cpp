#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long *a=new long long[n];		// kb dong
		bool *chuaxet=new bool[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
			chuaxet[i]=false;		// con chua xet
		}
		
		sort(a,a+n);				// sap xep day tang dan 
		long long index=(n-1)/2+1;	
		long long dem =0;
		
		for(int i=0;i <=(n-1)/2;i++){
			if(index > n-1) break;
			while(index <= n-1){
				if(2*a[i] <= a[index]){
					dem++;
					index++;
					break;
				}
				index++;
			}
		}
		cout<<n-dem<<endl;
	}
}

