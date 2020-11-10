#include<bits/stdc++.h> 
using namespace std; 

main(){ 
	int t;
	cin>>t;
	while(t--){
		
		int n,sum=0,dem=0;
		cin>>n;
		int a[2000],b[2000],c[2000],id[2000];
		
		for(int i=1;i<=n;i++){
			cin>>id[i]>>a[i]>>b[i];
			c[i] = 0;
		}
		
		for(int i=1;i<n;i++){ // sap xep profit giam dan , loi nhuan
			for(int j=i+1;j<=n;j++){
				if(b[i] < b[j] ){
					swap(a[i] ,a[j]);
					swap(b[i] ,b[j]);
				}
			}
		}
		
		for(int i=1;i <= n;i++){	// thu tu cong viec sau khi sx
			int j = a[i];		// deadline 
			while(j >= 1 && c[j] != 0){ // thoi gian cho phep , ktra dealine vdu 4 da nhan thif giam xuong ktra 3
				j--;
			}
			if(j != 0){
				c[j] = i; 	// deadline j cong viec i
				sum += b[i];
				dem++;
			}
		}
		cout<<dem<<" "<<sum<<endl;
	}
} 

