#include<bits/stdc++.h>

using namespace std;

main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		
		int c[10]={0};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int b;
		int dem=0;
		
		for(int i=0;i<n;i++){
			while(a[i]>0){
				b=a[i]%10;
				a[i] /= 10;
				
				if(c[b]!=1){
					c[b]=1;
					dem++;
				}
			}
			if(dem==10) break;
		}
				
		for(int i=0;i<10;i++){
			if(c[i]!=0){
				cout<<i<<" ";
			}
		}
		cout<<endl;
		
	}
}
