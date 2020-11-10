#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	int n;
	int a[1001];
	cin>>t;
	while(t--){
		cin>>n;
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int dem=0;
//		int min_idx;
//		
//		for(int i=0;i<n-1;i++){
//			min_idx=i;
//			for(int j=i+1;j<n;j++){
//				if(a[j]<a[i]){
//					min_idx=j;
//				}
//			} 
//			if(min_idx!=i) {
//				swap(a[i],a[min_idx]);
//				dem++;
//			}
//		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]) dem++;
		}
		
		if(dem%2==0){
			cout<<dem/2<<endl;
		}else{
			cout<<dem/2+1<<endl;
		}
		
	}
}
