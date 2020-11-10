#include<bits/stdc++.h>

using namespace std;
int numMin=-10000000;

int maxCrossingSum(int arr[],int l,int m,int h){
	
	int sum=0 ,left_sum=numMin , right_sum=numMin;
	
	for(int i=m;i>=l;i--){
		sum+=arr[i];
		if(sum>left_sum) left_sum=sum;
	}
	sum=0;
	for(int i=m+1;i<=h;i++){
		sum+=arr[i];
		if(sum>right_sum) right_sum=sum;
	}
	return left_sum+right_sum;
}

int maxSubArraySum(int arr[],int l,int h){
	if(l==h) return arr[l];
	int m=(l+h)/2;
	int k=max(maxSubArraySum(arr,l,m) , maxSubArraySum(arr,m+1,h));		// tong ben trai , bên phai lon nhat
	return max(k, maxCrossingSum(arr,l,m,h) );			// tong giua lon nhat
}

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int a[101];
		cin>>n;
		
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		cout<<maxSubArraySum(a,1,n)<<endl;
	}
}
