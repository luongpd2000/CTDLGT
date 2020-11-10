#include<bits/stdc++.h>

using namespace std;

int binarySearch(int a[],int l,int h,int x){
	while(l<=h){
		int m=(l+h)/2;
		if(a[m]==x){
			return 1;
		}else{
			if(a[m]>x){
				return binarySearch(a,l,m-1,x);
			}else{
				return binarySearch(a,m+1,h,x);
			}
		}
	}
	return -1;
}

main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n];
		int vt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==x) vt=i;
		}
		
		//cout<<binarySearch(a,0,n-1,x)<<endl;
		if(vt==0) cout<<"-1";
		else cout<<"1";
		cout<<endl;
	}
}
